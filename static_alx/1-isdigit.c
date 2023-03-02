#include "main.h"

/**
 * _isdigit - tests if input is a digit or not
 * @c: - the input number
 *
 * Return: 1 if num and 0 if not
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
