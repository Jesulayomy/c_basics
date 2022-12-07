#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char str1[] = "This - is - www.tutorialspoint.com - website";
	char str2[] = "Usage: exit status, where status is an integer";
	const char s[] = " ";
	char *token;

	printf("%s\n", str1);
	token = strtok(str1, s);
	printf("%s\n", token);

	printf("%s\n", str2);
	token = strtok(str2, s);
	printf("%s\n", token);

	token = strtok(str1, s);
	printf("%s\n", token);

	token = strtok(str2, s);
	printf("%s\n", token);

	return(0);
}
