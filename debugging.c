#include <stdio.h>

/**
 * main - this program was created to repeat the 
 * while loop issues found
 *
 * Return: 0 for a successful operation
 */
int main(void)
{
	int a;

	printf("Enter a number\n");
	scanf("%d", &a);

	while (a != 115)
	{
		if (a == 91)
		{
			printf("1\n");
		}
		else if (a == 94)
		{
			printf("2\n");
		}
		else
		{
			printf("3\n");
		}
		printf("Left if-else, next is scan input\n");
		scanf("%d", &a);
	}

	return (0);
}
