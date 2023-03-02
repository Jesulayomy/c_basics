#include "shell.h"

/**
 * insert_line - inserts the buffer into the lineptr
 * @lineptr: the address passed into getline(char **buffer)
 * @buffer: buffer from read
 * @n: size of line
 * @size: size of buffer
 *
 * Return: nil
 */
void insert_line(char **lineptr, size_t *n, char *buffer, size_t size)
{
	if (*lineptr == NULL || *n < size)
	{
		if (size > BUFSIZE)
			*n = size;
		else
			*n = BUFSIZE;
		*lineptr = buffer;
	}
	else
	{
		my_strcpy(*lineptr, buffer);
		free(buffer);
	}
}

/**
 * my_getline - gets a line of input from a stream/file descriptor
 * @buffer: address of buffer
 * @n: pointer to size of buffer
 * @stream: the stream to read data from
 *
 * Return: number of characters read
 */
ssize_t my_getline(char **buffer, size_t *n, FILE *stream)
{
	int fd;
	char *buf, c = 'c';
	static ssize_t input;
	ssize_t r;
	size_t size;

	if (input == 0)
		fflush(stream);

	buf = malloc(sizeof(char) * BUFSIZE);
	if (!buf)
		return (-1);

	fd = fileno(stream);
	while (c != NEWLINE)
	{
		r = read(fd, &c, 1);
		if ((r == 0 && input == 0) || r == -1)
		{
			free(buf);
			return (-1);
		}
		if (r == 0 && input != 0)
		{
			input++;
			break;
		}
		if (input >= BUFSIZE)
		{
			buf = realloc(buf, input + 1);
		}
		buf[input] = c;
		input++;
	}
	buf[input] = '\0';
	insert_line(buffer, n, buf, input);
	size = input;
	if (r != 0)
		input = 0;
	return (size);
}
