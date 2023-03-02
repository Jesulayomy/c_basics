#include "main.h"

/**
 * main - static libraries
 *
 * Return: 0 at successful exit
 */
int main(void)
{
	float a, b;

	printf("Enter two number to add\n");
	scanf("%f %f", &a, &b);
	add(a, b);

	printf("Enter two number to multiply\n");
	scanf("%f %f", &a, &b);
	mul(a, b);

	return (0);
}
