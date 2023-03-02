#include "main.h"

/**
 * _atoi - converts str to int
 * @s: string to be converted
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	int i, d, n, l, f, t;

	i = d = n = l = f = t = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			t = s[i] - '0';
			if (d % 2)
				t = -t;
			n = n * 10 + t;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
