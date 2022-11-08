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
	char name[20];
	char num[15];

	/**
	 * w for write, a for append, r for reading, r+ for r and w
	 * w+ r and w(overwrites), a+- for reading and appending text
	 * wb for binary write, ab, rb, rb+ for rb and wb(NULL if !exist)
	 * wb+ for rb and wb(over write), ab+ for rb and ab - binary
	 */

	fptr = fopen("./store.txt", "a");

	printf("Enter Your name\n");
	scanf("%s", name);
	fprintf(fptr, "%s ", name);
	printf("Enter Your number\n");
	scanf("%s", num);
	fprintf(fptr, "%s\n", num);
	fclose(fptr);

	return (0);
}
