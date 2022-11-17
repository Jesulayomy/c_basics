#include <stdio.h>

#define SIZE 1024
#define PI 3.14159265359
#define ABS(X) (((X) >= (0)) ? (X) : (-X))
#define SUM(x, y) (\
		x * y\
		)

/**
 * main -
 *
 * Return: 0 at successful exit
 */
int main()
{
	int n;

	printf("%d, %f\n", SIZE, 98 * 98 * PI);
	printf("%s\n", __FILE__);
	n = ABS(-30) * -10;
	printf("%d, %d\n", n, SUM(3 + 3, 2 + 2));

	return(0);
}
