#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

size_t _getline(char **lineptr, size_t *n, FILE *stream);

int main(void)
{
	size_t m, n = 10;
	char *lineptr;

	printf("$ ");

	m = _getline(&lineptr, &n, stdin);

	printf("%s", lineptr);
	printf("%lu\n", m);

	return (0);
}

size_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	int fd = fileno(stream);
	size_t m;

	m = read(fd, *lineptr, *n);

	return (m);
}
