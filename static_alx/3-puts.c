#include "main.h"

/**
 * _puts - a fake stringg printer
 * @str: the pointer to a string
 *
 * Return: nil
 */
void _puts(char *str)
{
	int i;
	int s;

	for (i = 0; str[i]; i++)
	{
		s = (int) str[i];
		_putchar(s);
	}
	_putchar(10);
}
