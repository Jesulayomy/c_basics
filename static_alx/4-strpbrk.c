#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches for a set of bytes
 * @s: the string
 * @accept: the byte to be searched for
 *
 * Return: the pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, length1, length2;
	char *r;

	length1 = strlen(s);
	length2 = strlen(accept);

	for (i = 0; i < length1; i++)
	{
		for (j = 0; j < length2; j++)
		{
			if (s[i] == accept[j])
			{
				r = &s[i];

				return (r);
			}
		}
	}

	return (r);
}
