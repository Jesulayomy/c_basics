#include <stdio.h>

int main(void)
{
	int i;	/* Even though i is declared later, its address is allocated immiedately after n */
	int *p;
	int a[5];
	int n = 0x3;
	int junk1 = 0x5;
	int junk2 = 0x6;
	
	a[2] = 0x1024;
	p = &n;
	/*
	 * write your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */
	*(p + 5) = 0x98;
	/* ...so that this prints 98\n */



	printf("The address of n is: %p\n", &n);
	printf("The address of i is: %p\n", &i);
	printf("a[2] is: %x\n", a[2]);

	for (i = 0; i < 12; i++)
	{
		printf ("pointer *(p + %d) is at %p, and it points to a value of %x\n", i, &p[i], p[i]);
	}

	return (0);
}
