#include <stdio.h>

int main()
{
	int n;
	int a[5] = {0x01, 0x02, 0x03, 0x04, 0x05};
	int *p;
	int i;


	p = &n;
	printf("Integer intn is at: %p, and its size is %lu, and value %x\n", &n, sizeof(n), n);

	printf("Pointer intp is at: %p, and its size is %lu, and value %x\n", &p, sizeof(p), p);

	for (i = 0; i < 6; i++)
	{
		printf("Integer a[%d] is at: %p, and its size is %lu, and value %x\n", i, &a[i], sizeof(a[i]), a[i]);
	}

	a[2] = 0x98;
	for (i = 0; i < 9; i++)
	{
		printf("The value at *(p + %d) is: %x, address %x\n", i, *(p + i), &*(p + 1));
	}

	return (0);
}
