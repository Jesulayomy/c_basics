#include "main.h"

int (*get_func(const char *format, int j))(va_list)
{
	prn fns[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_decimal},
		{NULL, NULL}
	};
	int i = 0;

	while (fns[i].func != NULL)
	{
		if (fns[i].c[0] == format[j])
		{
			return (fns[i].func);
		}
		i++;
	}

	return (NULL);
}
