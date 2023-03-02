#include "main.h"

/**
 * _islower - checks for upper or lower case
 * @c: - an integer value (ascii) of the character entered
 *
 * Return: 1 if lower and 0 if otherwise
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
