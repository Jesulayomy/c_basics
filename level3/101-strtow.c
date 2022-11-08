#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

char *strtow(char *str)
{
	char *arr;
	int m, n = 0, i, j = 0;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * (strlen(str) + 1));

	for (m = 0; str[m] != '\0'; m++)
	{
		arr[m] = str[m];
		if (arr[m] == ' ')
			arr[m] = '\n';
	}
	arr[m] = '\0';

	return (arr);
}

int main(void)
{
	char *str = "ALX School #cisfun ";
	char *string;

	string = strtow(str);

	printf("%s", string);

	free(string);

	return (0);
}
