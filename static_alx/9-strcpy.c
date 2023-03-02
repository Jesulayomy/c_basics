#include "main.h"

/**
 * *_strcpy - string pointed to by src is copied
 * along with \0 to dest
 * @dest: el destination
 * @src: string we copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, t;

	t = 0;

	while (src[t] != '\0')
	{
		t++;
	}

	for (i = 0; i < t; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
