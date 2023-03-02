#include "shell.h"

	/* i, k, l, check; */
	/* char *value; */
	/*
	for (i = 0; shell->_environ[i]; i++)
	{
		j = 0, check = 0;
		while (shell->_environ[i][j] != '=' && name[j] != '\0')
		{
			if (shell->_environ[i][j] != name[j])
				check = 1;
			j++;
		}
		if (check == 0)
		{
			for (k = j + 1, l = 0; shell->_environ[i][k]; k++, l++)
				;

			value = malloc(sizeof(char) * (l + 1));

			for (k = j + 1, l = 0; shell->_environ[i][k]; l++, k++)
				value[l] = shell->_environ[i][k];
			value[l] = '\0';
			return (value);
		}
	}
	*/
/**
 * fetch_alias - prints an alias if it exists
 * @shell: shell data struct
 * @name: the name of the alias to print
 *
 * Return: 1 if found or -1 if not found
 */
int fetch_alias(sh_data *shell, char *name)
{
	/* int i, j, k; */
	char *search = malloc(sizeof(char) * (strlen(shell->arr[0]) + strlen(name) + 3));

	my_strcpy(search, shell->arr[0]);
	my_strcat(search, " ");
	my_strcat(search, name);
	my_strcat(search, "=");

	printf("Search for: %s\n", search);

	/*
	for (i = 0; shell->alias[i]; i++)
	{
		j = 0, check = 0;
		while (shell->alias[i][j] != '=' && search[j] != '\0')
		{
		}
	}
	*/
	return (0);
}
/**
 * my_alias - handles the alias builtin command
 * @shell: struct containing shell ddata
 *
 * Return: an integer when successful
 */
int my_alias(sh_data *shell)
{
	int i, j;

	if (shell->arr[1] == NULL)
	{
		for (j = 0; shell->alias[j]; j++)
			printf("%s", shell->alias[j]);
		return (0);
	}
	else
	{
		for (j = 1; shell->arr[j]; j++)
		{
			i = fetch_alias(shell, shell->arr[j]);
			if (i == -1)
				printf("%s: %s: Not found\n", shell->arr[0], shell->arr[j]);
		}

		return (0);
	}

	return (-1);
}

/**
 * get_alias - extracts the aliases from the .bashrc file
 * @shell: shell data struct
 *
 * Return: pointer to the value
 */
void get_alias(sh_data *shell)
{
	char *temp = _getenv(shell, "HOME");
	char *file_name = "/.bashrc", *buffer = NULL;
	char *path = malloc(sizeof(char) * (1 + strlen(temp) + strlen(file_name)));
	size_t n;
	ssize_t m, j = 0, i = 0;
	FILE *stream;

	my_strcpy(path, temp);
	my_strcat(path, file_name);

	/* need to change fopen, freopen and getline to allowed funcs */
	stream = fopen(path, "r");
	m = getline(&buffer, &n, stream);
	while (m != -1)
	{
		if (buffer[0] == 'a' && buffer[1] == 'l' && buffer[2] == 'i')
			j++;
		m = getline(&buffer, &n, stream);
	}
	shell->alias = malloc(sizeof(char *) * (j + 1));

	stream = freopen(path, "r", stream);
	m = getline(&buffer, &n, stream);
	while (m != -1)
	{
		if (buffer[0] == 'a' && buffer[1] == 'l' && buffer[2] == 'i' && buffer[3] == 'a')
		{
			shell->alias[i] = my_strdup(buffer);
			i++;
		}
		m = getline(&buffer, &n, stream);
	}
	shell->alias[i] = NULL;

	free(buffer);
	free(path);
	free(temp);
	fclose(stream);
}
