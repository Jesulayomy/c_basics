#include <stdio.h>

/**
 * main - for printing addresses
 *
 * Return: 0 when done
 */
int main(void)
{
	int x = 12;	/** Initializzed a variable */
	int *ax = &x;	/* made a pointer, whose value is the address of x */

	printf("The value of x is: %d, and its address is %p.\n", x, ax);

	return (0);
}
