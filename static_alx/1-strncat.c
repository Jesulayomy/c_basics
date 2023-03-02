#include "main.h"

/**
 * _strncat - joins the source string to the destination
 * @dest: destination
 * @src: sauce
 * @n: number of bytes to copy from it
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, t;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (t = 0; (t < n && src[t] != '\0'); t++, i++)
	{
		dest[i] = src[t];
	}

	dest[i] = '\0';

	return (dest);
}
