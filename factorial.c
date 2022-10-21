#include <stdio.h>

/**
 * main - The body of the function
 *
 * Return: 0 as successful
 */
int main(void)
{
	int n, f, m;

	printf("Enter a number\n");
	scanf("%d", &n);
	m = n;

	for (f = 1; n > 1; n--)
	{
		f = n * f;
	}

	printf("%d is the factorial of %d\n", f, m);

	return (0);
}
