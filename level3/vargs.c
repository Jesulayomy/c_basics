#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//	int printf(const char *format[, argument, ...]);

//	int printf(const char *format, ...);

//	void va_start(va_list ap, lastfix);

double AddDouble(int x, ...);

int main(void)
{
	double d1 = 1.5;
	double d2 = 2.5;
	double d3 = 3.5;
	double d4 = 4.5;
	double d5 = 5.5;

printf("Given an argument: %2.1f\n", d1);
printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(1, d1));
printf("Given an argument: %2.1f and %2.1f\n", d1, d2);
printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(2, d1, d2));
printf("Given an argument: %2.1f\n, %2.1f and %2.1f", d1, d2, d3);
printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(3, d1, d2, d3));
printf("Given an argument: %2.1f, %2.1f, %2.1f and %2.1f\n", d1, d2, d3, d4);
printf("The result returned by AddDouble() is: %2.1f\n\n", AddDouble(4, d1, d2, d3, d4));

	return (0);
}

double AddDouble(int x, ...)
{
	va_list arglist;
	int i;
	double result = 0.0;

	printf("The number of arguments is %d\n", x);
	va_start (arglist, x);
	for (i = 0; i < x; i++)
		result += va_arg(arglist, double);
	va_end (arglist);
	return result;
}
