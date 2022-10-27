#include <stdio.h>

int main(void)
{
	  int n;
	    int a[5] = {1, 2, 3, 4, 5};
	      int *p;
	int i = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Integer a[%d] is at: %p, and its size is %lu, and value %x\n", i, &a[i], sizeof(a[i]), a[i]);
	}

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
	      printf("a[2] = %d\n", a[2]);
	
	for (i = 0; i < 9; i++)
	{
		printf("The value at *(p + %d) is: %x\n", i, p[i]);
	}

		        return (0);
}
