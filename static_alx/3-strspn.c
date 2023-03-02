#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the input string
 * @accept: pointer to a character
 *
 * Return: the bytes found in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = strspn(s, accept);

	return (n);
}
