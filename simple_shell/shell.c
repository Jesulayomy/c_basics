#include "shell.h"

/**
 * get_func - returns functions for builtin commands
 * @arr: the line splitted into commands
 *
 * Return: the function that prints the builtin
 */
int (*get_func(char **arr))(sh_data *)
{
	built_in sh[] = {
		{"exit", my_exit},
		{"env", my_env},
		{"setenv", my_set},
		{"unsetenv", my_unset},
		/*{"alias", my_alias},*/
		{"cd", my_cd},
		{NULL, NULL}
	};

	int i = 0;

	if (arr != NULL)
	{
		while (sh[i].func != NULL)
		{
			if (my_strcmp(sh[i].str, arr[0]) == 0)
			{
				return (sh[i].func);
			}
			else
			{
				i++;
			}
		}
	}

	return (NULL);
}

/**
 * loop_shell - runs the shell continously
 * @shell: the shell data
 *
 * Return: void
 */
void loop_shell(sh_data *shell)
{
	char *path;

	for (; ;)
	{
		printf("($) ");
		fflush(stdout);
		path = check_shell(shell);
		if (!path)
			continue;

		shell->pid = fork();
		if (shell->pid == 0)
		{
			shell->status = execve(path, shell->arr, shell->_environ);
			if (shell->status == -1)
			{
				printf("%s: Permission denied\n", shell->arr[0]);
				free_list(shell->path);
				free_arr2(shell->_environ);
				free_arr2(shell->arr);
				free(shell->line);
				free(path);
				exit(98);
			}
		}
		else
		{
			wait(NULL);
		}

		free_arr2(shell->arr);
		free(path);
	}
}

/**
 * check_shell - checks the shell commands, paths and builtin
 * @shell: pointer to shell structure
 *
 * Return: path or NULL
 */
char *check_shell(sh_data *shell)
{
	int (*built_in_func)(sh_data *sh);
	char *path;

	shell->arr = get_commands(shell->line, shell->length);
	if (!shell->arr)
	{
		free(shell->line);
		return (NULL);
	}
	built_in_func = get_func(shell->arr);
	if (built_in_func != NULL)
	{
		built_in_func(shell);
		free_arr2(shell->arr);
		return (NULL);
	}
	path = search_path(shell->path, shell->arr[0]);
	if (!path)
	{
		printf("%s: No such file or directory\n", shell->av[0]);
		free_arr2(shell->arr);
		free(path);
		return (NULL);
	}
	return (path);
}

/**
 * main - main body of the shell
 * @ac: command line argument count
 * @av: pointer to strings of command line arguments
 * @env: environment variables
 *
 * Return: 0 at successful exit
 */
int main(int ac, char *av[], char *env[])
{
	sh_data shell;
	int i;

	shell.line = NULL;
	shell.length = 0;
	shell.pid = getpid();
	shell.status = 0;
	shell.arr = NULL;
	shell.av = av;
	shell.path = path_to_list(env);

	for (i = 0; env[i]; i++)
		;

	shell._environ = malloc(sizeof(char *) * (i + 1));
	for (i = 0; env[i]; i++)
		shell._environ[i] = my_strdup(env[i]);
	shell._environ[i] = NULL;

	/* shell.aliases = get_aliases(sh_data *shell, char *name); */
	(void) ac;

	loop_shell(&shell);

	return (0);
}
