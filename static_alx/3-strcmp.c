#include "main.h"

/**
 * _strcmp - compares string lengths
 * @s1: compared to
 * @s2: this
 *
 * Return: the value of the comparison
 */

int _strcmp(char *s1, char *s2)
{
	int n, d;

	d = 0;
	n = 0;
	for (; (s1[n] != '\0' || s2[n] != '\0'); n++)
	{
		d = s1[n] - s2[n];
		if (d != 0)
			break;
	}

	return (d);
}
