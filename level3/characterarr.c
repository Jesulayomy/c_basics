#include <stdio.h>

/**
 * main - arrays of characters
 *
 * Return: 0 at completion
 */
int main(void)
{
	char ch_arr[7] = {'H', 'E', 'L', 'L', 'O', '!', '\0'};
	int i;

	for (i = 0; i < 7; i++)
		printf("ch_arr[%d] contains %c\n", i, ch_arr[i]);

	printf("put all the letters together(v1): \n");
	for (i = 0; i < 7; i++)
		printf("%c", ch_arr[i]);

	printf("\nput all the letters together(v2): \n");
	printf("%s\n", ch_arr);

	return (0);
}
