#include<stdio.h>

/**
 * main - Increment and decrement operators
 *
 * Return: 0 when complete
 */
int main(void)
{
	int a, b, c, d, e, f, g;	/* Initialized constants */

	a = 15;
	b = 17;
	c = 32;
	d = 73;
	e = 86;
	f = 57;
	g = 78;

	int subtrac = f - c;
	int produc = e * d;
	int squar = c * c;
	int divisio = g / e;
	int modul = g % f;
	int summatio = a + b;

/* Results, In/Decrement operators */
	printf("a=%d b=%d c=%d d=%d e=%d f=%d g=%d \n", a, b, c, d, e, f, g);
	printf("The sum of a and b is: %d \n", summatio);
	printf("The difference between f and c is: %d \n", subtrac);
	printf("The product of d and e is: %d \n", produc);
	printf("The result of g/e is: %d \n", divisio);
	printf("The square of c is: %d \n", squar);
	printf("The remainder when g is divided by f is: %d \n\n", modul);
	printf("a += b ==> %d \na++ ==> %d\n++a ==> %d\n", a += b, a++, ++a);
	printf("a = a / 2 ==> %d \n", a /= 2);
	n1 = getchar();
	n2 = getchar();

	printf("You have entered %f + %f. \n", n1, n2);
	printf("Few possibilities are: \nx + y = %f \n", n1 + n2);
	printf("x - y = %f \n", n1 - n2);
	printf("x / y = %f \n", n1 / n2);
	printf("x * y = %f \n", n1 * n2);
	n1 += n2;

	printf(" n1 += n2 gives; %f \n", n1);

	return (0);
}
