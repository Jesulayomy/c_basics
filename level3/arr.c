#include <stdio.h>

/**
 * main - This source code initializes an array and calculates its determinant
 *
 * Return: 0 when completed
 */
int main(void)
{
	int i;
	int j;
	float arr[3][3] = {1, 0, -2, 0, 4, -1, 3, 5, 2};
	float det;

	for (i = 0; i < 3; i++)
	{
	for (j = 0; j < 3; j++)
	{
		printf("arr[%d][%d] is: %.0f and is located at %p\n", i, j, arr[i][j], &arr[i][j]);
	}
	}
	det = (((arr[0][0]) * (arr[1][1]) * (arr[2][2]))
			- ((arr[0][0]) * (arr[1][2]) * (arr[2][1]))
			- ((arr[0][1]) * (arr[1][0]) * (arr[2][2]))
			+ ((arr[0][1]) * (arr[1][2]) * (arr[2][0]))
			+ ((arr[0][2]) * (arr[1][0]) * (arr[2][1]))
			- ((arr[0][2]) * (arr[1][1]) * (arr[2][0]))
			);
	printf("Determinant of the matrix is: %.2f\n", det);
	return (0);
}
