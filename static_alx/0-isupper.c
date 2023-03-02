#include "main.h"

/**
 * _isupper - tests if input is upper or not
 * @c: - the input character
 *
 * Return: 1 if uppercase and 0 if not
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
