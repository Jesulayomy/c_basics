#include <stdio.h>

/**
 * main - Counts the max value of int
 *
 * Return: 0 for a successsful output
 */
int main(void)
{
	int x;

	x = sizeof(int);
	printf("The sixe of int here is %d.\n", x);
	printf("The max value of int here is %d\n", (x != 2) ? ~(1 << ((x * 8) - 1)) : ~(1 << 15));

	return(0);
}
