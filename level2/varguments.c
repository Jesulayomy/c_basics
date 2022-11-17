#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int add_up(int count, ...);

int main(void)
{
	printf("%d\n", add_up(3, 4, 2, 8));

	printf("%d\n", add_up(7, 1, 2, 3, 4, 5, 6, 7));

	return (0);
}

int add_up(int count, ...)
{
	va_list arg_ptr;
	int i, sum = 0;

	va_start (arg_ptr, count);

	for (i = 0; i < count; i++)
		sum += va_arg (arg_ptr, int);

	va_end (arg_ptr);

	return (sum);
}
