#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;
	
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
	*(p + 6) = 0x98;
	/* ...so that this prints 98\n */

	int i;	/* Even though i is declared later, its address is allocated immiedately after n */

	printf("The address of n is: %p\n", &n);
	printf("The address of i is: %p\n", &i);
	printf("a[2] is: %d\n", a[2]);

	for (i = 0; i < 10; i++)
	{
		printf ("pointer *(p + %d) is at %p, and it points to a value of %x\n", i, &p[i], p[i]);
	}

	return (0);
}
