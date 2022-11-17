#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void _print(char *phs, ...);

int main(void)
{
	_print("ffdfcr", 1.1, 2.3, 10, 3.7);



	return (0);
}

void _print(char *phs, ...)
{
	int d, i, num_pl = strlen(phs);
	double f;
	char c;
	va_list args;

	va_start(args, phs);

	for (i = 0; i < num_pl; i++)
	{
		if (phs[i] == 'd')
		{
			d = va_arg(args, int);
			printf("%d\n", d);
		}
		else if (phs[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f\n", f);
		}
		else
		{
			c = phs[i];
			printf("%c\n", c);
		}

	}

	va_end(args);
}



