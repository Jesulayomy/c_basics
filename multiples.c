#include <stdio.h>

/**
 * main - body
 *
 * This code prints out the multiples of a number between one and 100
 *
 * Return: 0 at completion
 */
int main(void)
{
	int n, i;

	printf("Numbers and multiples\nEnter a number... \n");
	scanf("%d", &n);

	for (i = 1;i < 101; i++)
	{
		if ((i % n) == 0)
			printf("%d is a multiple of %d\n", i, n);
	}

	return (0);
}
