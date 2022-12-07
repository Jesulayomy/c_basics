#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a[10] = {31, 14, 13, 46, 42, 47 ,24 ,75 ,24, 53};
	int i, j, n;

	for (i = 0; i < 10; i++)
		printf("a[%d]: %d\n", i, a[i]);

	system("echo Bubble sorting...");
	system("sleep 2");

	for (i = 9; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (a[j] > a[j + 1])
			{
				n = a[j];
				a[j] = a[j + 1];
				a[j + 1] = n;
			}
		}
	}

	for (i = 0; i < 10; i++)
		printf("a[%d]: %d\n", i, a[i]);

	return (0);
}
