#include <stdio.h>

int n;

/**
 * main -atesting switch statements
 *
 * Return: 0 at successful exit
 */
int main()
{
	for(;;)
	{
		scanf("%d", &n);
	switch(n)
	{
		case 1:
			printf("One\n");
			break;
		case 2:
			printf("Two\n");
			break;
		case 3:
			printf("Three\n");
			break;
		default:
			printf("Numbers\n");
			return (0);
	}

	}

	return(0);
}

