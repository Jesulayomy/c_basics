#include <stdio.h>

/**
 * main - The body of the function
 *
 * Return: 0 as successful
 */
int main(void)
{
	int n, f, m;	/* Initializing parameters */

	printf("Enter a number\n");
	scanf("%d", &n);	/*Collect user input */
	m = n;
	/* Loop */
	for (f = 1; n > 1; n--)
	{
		f *= n;
	}
	/* output */
	printf("%d is the factorial of %d\n", f, m);

	return (0);
}
