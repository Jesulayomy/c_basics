#include "main.h"

/**
 * _strcat - joins the source string to the destination
 * @dest: destination
 * @src: sauce
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	dest[i] = '\0';

	return (dest);
}
