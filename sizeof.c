#include<stdio.h>

int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an int is: %lu. \n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu. \n", (unsigned long)sizeof(c));

	return (0);
}
