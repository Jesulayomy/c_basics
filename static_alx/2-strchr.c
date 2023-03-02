#include "main.h"

/**
 * _strchr - findss a character in a string
 * @s: pointer to string
 * @c: character to be found
 *
 * Return: a pointer to the 1st occurence of the character
 */
char *_strchr(char *s, char c)
{
	char *n = strchr(s, c);

	return (n);
}
