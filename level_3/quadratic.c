#include <stdio.h>

/**
 * quad - Quadratic function
 * @a: - for a
 * @b: - for b
 * @c: - for c
 *
 * This code collects values of a quadratic equation and evaluates it
 *
 * Return: done1 and done2 as values for x1 and x2
 */
int quad(int a, int b, int c)
{
	float disc2, disc, root, left, right, done1, done2;

	disc = ((b * b) - (4 * a * c));
	root = disc / 2;
	left = ((-b) / (2 * a));
	right = (root / (2 * a));
	done1 = left + right;
	done2 = left - right;
	printf("The values are %.0f and %.0f\n", -done1, -done2);

	return (0);
}

/**
 * main - here we call the function
 *
 * Return: 0 if successful
 */
int main(void)
{
	int ca_lc;

	ca_lc = quad(1, 6, 8);

	printf("Thanks for staying.\n");
	return (0);
}
