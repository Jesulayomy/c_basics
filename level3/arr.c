#include <stdio.h>

/**
 * main - an array
 *
 * Return: 0 when completed
 */
int main(void)
{
	int i;
	int j;
	float arr[3][3] = {1, 0, -2, 0, 4, -1, 3, 5, 2};

	for (i = 0; i < 3; i++)
	{
		for (j =0; j < 3; j++)
		{
			printf("arr[%d][%d] is: %.0f and is located at %p\n", i, j, arr[i][j], &arr[i][j]);
		}
	}

	return (0);
}
