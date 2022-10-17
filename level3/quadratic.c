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
float quad(float a, float b, float c)
{
	float disc2, disc, root, left, right, done1, done2;
	disc = ((b * b) - (4 * a * c));
	float n = disc;
	if (disc < 0)
	{
		printf("This equation has no real roots. Dont break me.\n");
	}
	else
	{
		printf("Equation: (%.2f)x*x + (%.2f)x + (%.2f) = 0\n", a, b, c);
		printf("The Discriminant is: %.2f\n", disc);
		while ((disc - (n / disc)) > 0.00001)
		{
			disc = ((disc + (n / disc)) / 2);
		}
		root = disc;
		printf("root of the disc is: %f\n", root);
		left = ((-b) / (2 * a));
		right = (root / (2 * a));
		done1 = left + right;
		done2 = left - right;
		printf("The solutions to the equation are x = %.2f and x = %.2f\n", done1, done2);
	}
	return (0);
}

/**
 * main - here we call the function
 *
 * Return: 0 if successful
 */
int main(void)
{
	float x, y, z;

	printf("Enter the values of a, b, then c.\n");
	printf("Enter a: ");
	scanf("%f", &x);
	printf("Enter b: ");
	scanf("%f", &y);
	printf("Enter c: ");
	scanf("%f", &z);
	quad(x, y, z);

	return (0);
}
