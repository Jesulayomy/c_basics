#include "main.h"

/**
 * _abs - the absolute value function
 * @a: - parameter
 * Return: 0 for no errors
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	else
		return (0);
}
