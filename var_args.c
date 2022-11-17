#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int max(int num_args, ...);

/**
 * main - variable arguments
 *
 * Return: 0 at success
 */
int main(void)
{
	max(6, 31, 35, 83, 12, 35, 82);

	return (0);
}

int max(int num_args, ...)
{
	va_list vnums;
	int i, x, max = 0;

	va_start (vnums, num_args);
	for (i = 0; i < num_args; i++)
	{
		x = va_arg(vnums, int);
		if (i == 0)
			max = x;
		else if (max < x)
			max = x;

		printf("x is: %d\nSo far, max is:%d\n", x, max);
	}

	return (0);
}
