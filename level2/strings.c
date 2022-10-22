#include <stdio.h>

int main(void)
{
	char str1[] = {'A', ' ', 's', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 'n', 's', 't', 'a', 'n', 't', '\0'}
	char str2[] = "Another string constant";
	char *ptr_str;
	int i;

	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	for (i = 0; str2[i]; i++)
	{
		printf("%c", str2[i]);
	}
	printf("\n");

	ptr_str = "Assign a string to a pointer.";
	for (i = 0; *ptr_str; i++)
	{
		printf("%c", *ptr_str++);
	}
	return (0);
}
