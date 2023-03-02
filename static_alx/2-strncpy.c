#include "main.h"

/**
 * _strncpy - copies the source string to the destination
 * @dest: destination
 * @src: sauce
 * @n: number of bytes to copy from it
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
