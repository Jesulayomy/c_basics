#include <stdio.h>

/**
 * main - exit strategy
 *
 * Return: 0 cos it worked
 */
int main(void)
{
	int c = ' ';

	printf("Enter a character\nOr guess the letter that lets you exit\n");

	while (c != 'x')
	{
		c = getc(stdin);
	}

	printf("\nThat one was just obvious huh, lets see you pass the next one\n");
	return (0);
}
