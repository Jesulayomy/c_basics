#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - file input and output
 *
 * Return: 0 at successful exit
 */

int main(void)
{
	FILE *fptr;
	char fch[100];

	fptr = fopen("./text.txt", "r");
	printf("%s\n", fgets(fch, 90, fptr));

	fclose(fptr);

	return (0);
}
