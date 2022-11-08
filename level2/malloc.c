#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(__attribute__((unused)) int argc,__attribute__((unused)) char *argv[])
{
	/* void *malloc(size_t size) */
	char *str;
	int *arr;
	int n, i;

	/* Allocating memory to the string str */
	str = (char *) malloc(11);
	strcpy(str, "Jesulayomi");
	printf("String is %s\nAddress is %p\n", str, str);

	/* memory reallocation */
	str = (char *) realloc(str, 16);
	strcat(str, " Aina");
	printf("String is %s\nAddress is %p\n", str, str);

	/* memory deallocation */
	free(str);

	printf("Enter the number of subjects\n");
	scanf("%d", &n);

	arr = (int *) calloc(n, sizeof(int));
	printf("Enter the scores of the subjects\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	free(arr);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	return (0);
}
