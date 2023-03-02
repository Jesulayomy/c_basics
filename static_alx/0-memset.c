#include "main.h"

/**
 * _memset - filling memory with a const
 * @s: the string
 * @b: the const to apply
 * @n: number of bytes to fill
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int u = 0;

	while (u < n)
	{
		s[u] = b;
		u++;
	}

	return (s);
}
