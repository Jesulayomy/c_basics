#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; argv[n] != NULL; n++)
	{
		printf("%s\n", argv[n]);
	}
	fork();
	fork();
	fork();
	system("pstree -p");

	return (0);
}
