#include <stdio.h>
#include <stdlib.h>

/**
 * main -
 *
 * Return: 0 at successful exit
 */
int main()
{
	int num;
	FILE *fptr;

	fptr = fopen("/home/vagrant/my_practice/c_basics/file_handling/sample.txt", "w");
	/* w for write, a for append, r for reading, r+ for r and w, 
	   w+ r and w(overwrites), a+- for reading and appending text */
	/* wb for binary write, ab, rb, rb+ for rb and wb(NULL if !exist) 
	   wb+ for rb and wb(over write), ab+ for rb and ab - binary */
	printf("Enter a number, will be written with w\n");
	scanf("%d", &num);
	fprintf(fptr, "%d\n", num);
	fclose(fptr);

	fptr = fopen("/home/vagrant/my_practice/c_basics/file_handling/sample.txt", "a");
	printf("Enter another number to be appended with a\n");
	scanf("%d", &num);
	fprintf(fptr, "%d\n", num);

	fclose(fptr);

	return(0);
}
