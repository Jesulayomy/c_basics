#include "main.h"

/**
 * _memcpy - copies from source to memory
 * @dest: the end point
 * @src: the sauce
 * @n: the amount to copy
 *
 * Return: a pointer to the destination @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = memcpy(dest, src, n);

	return (s);
}
