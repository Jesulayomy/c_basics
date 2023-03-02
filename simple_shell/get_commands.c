#include "shell.h"

/**
 * get_commands - gets a command
 * @buffer: a buffer
 * @n: size of buffer
 *
 * Return: an array of split tokens of commands
 */
char **get_commands(char *buffer, size_t n)
{
	char **arr = NULL;
	char *token;
	size_t k = 0;
	ssize_t i, r;

	r = my_getline(&buffer, &n, stdin);
	if (r == -1)
	{
		free(buffer);
		return (arr);
	}
	r = rm_comments(&buffer);
	if (r == 0)
		return (NULL);
	for (i = 0; i < r; i++)
	{
		if (buffer[i] == ' ' || buffer[i] == '\n' || buffer[i] == '\t')
		{
			k++;
		}
		else
			continue;
	}
	arr = malloc(sizeof(char *) * (k + 1));
	token = my_strtok(buffer, DELIM_T);
	i = 0;
	while (token != NULL)
	{
		arr[i] = malloc(sizeof(char) * (my_strlen(token) + 1));
		my_strcpy(arr[i], token);
		token = my_strtok(NULL, DELIM_T);
		i++;
	}
	arr[i] = NULL;
	free(buffer);
	return (arr);
}

/**
 * rm_comments - strips the comments from a command
 * @buffer: string to check and strip
 *
 * Return: nothing
 */
int rm_comments(char **buffer)
{
	int m = 0, i, j = 0;
	char *buf = my_strdup(*buffer);
	char *temp = NULL, prev = 'c';

	for (; buf[m] != '\0'; m++)
	{
		if (m == 0 && buf[m] == '#')
		{
			free(buf);
			return (0);
		}
		if (j == 0 && buf[m] == '#')
		{
			free(buf);
			return (0);
		}
		if (buf[m] != ' ' && buf[m] != '\t')
			j++;
		if (prev == ' ' && buf[m] == '#')
			break;

		prev = buf[m];
	}
	if (m == my_strlen(*buffer))
	{
		free(buf);
		return (m);
	}
	temp = malloc(sizeof(char) * (m + 2));
	for (i = 0; buf[i] != '#'; i++)
		temp[i] = buf[i];
	temp[i] = '\n';
	temp[i + 1] = '\0';
	free(*buffer);
	*buffer = temp;
	free(buf);

	return (m + 1);
}
