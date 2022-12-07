#include "main.h"

int _printf(const char *format, ...)
{
	va_list arguments;
	int i = 0, c = 0;
	int (*ptr_to_func)(va_list);

	if (!format)
		return (-1);

	if (!format[i])
	{
		return (0);
	}

	va_start(arguments, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			ptr_to_func = get_func(format, i + 1);

			if (ptr_to_func == NULL)
			{
				_putchar('%');
				c++;
			}
			else
			{
				c += ptr_to_func(arguments);
				i++;
			}

		}
		else
		{
			_putchar(format[i]);
			c++;
		}
	}


	return (c);
}
