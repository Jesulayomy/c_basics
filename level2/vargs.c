#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void print_all(const char * const format, ...);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	/**
	  	Valid types
	 	c: char
		i: integer
		f: float
		s: char *
	*/

	print_all("cheis", 'B', 3, "stSchool");
	return (0);
}

void print_all(const char * const format, ...)
{
	unsigned int i, n;
	char *string;
	char array[5] = {'s', 'f', 'i', 'c', '\0'};
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		n = 0;
		while(i != 0 && array[n] != '\0')
		{
			if (format[i] == array[n])
				printf(", ");

			n++;
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", var_arg(args, int));
				break;
			case 'f':
				printf("%f", var_arg(args, double));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
		}
		i++;
	}


	printf("\n");
}











