#include <stdio.h>

/**
 * main - an array
 *
 * Return: 0 when completed
 */
int main(void)
{
	int i;
	int arr[10];

	for (i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		printf("arr[%d] is initialized with %d.\n", i, arr[i]);
	}

	return (0);
}
