#include "main.h"

int print_str(va_list arguments)
{
	int i;
	char *str;
	char null[] = "(null)";

	str = va_arg(arguments, char *);

	if (str == NULL)
	{
		for (i = 0; null[i] != '\0'; i++)
			_putchar(null[i]);
		return (i);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (i);
}
