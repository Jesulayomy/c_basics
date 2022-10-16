#include <stdio.h>

/**
 * main - switch test
 *
 * Return: 0
 */
int main(void)
{
	int day;

	printf("Please enter a single digit for a day\n(within the range of 1 to 3): ");
	day = getchar();

	printf("Your input is %d, %c.\n", day, day);

	switch (day)
	{
		case '1':
			printf("Day 1\n");

		case '2':
			printf("Day 2\n");

		case '3':
			printf("Day 3\n");

		case '4':
			printf("Day 4\n");

		case '5':
			printf("Day 5\n");

		case '6':
			printf("Day 6\n");

		default:
			printf("exit\n");
	}

	switch (day)
	{
		case '1':
			printf("Day 1\n");
			break;

		case '2':
			printf("Day 2\n");
			break;

		case '3':
			printf("Day 3\n");
			break;

		case '4':
			printf("Day 4\n");
			break;

		case '5':
			printf("Day 5\n");
			break;

		case '6':
			printf("Day 6\n");
			break;

		default:
			printf("exit\n");
	}
	return (0);
}
