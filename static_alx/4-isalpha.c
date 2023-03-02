#include "main.h"

/**
 * _isalpha - checks for alphabets or not
 * @c: - an integer value (ascii) of the character entered
 *
 * Return: 1 if lower and 0 if otherwise
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
