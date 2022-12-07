#include "main.h"

int print_char(va_list arguments)
{
	char c;

	c = va_arg(arguments, int);

	_putchar(c);

	return (1);
}
