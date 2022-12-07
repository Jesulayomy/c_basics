#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/home/vagrant/", NULL};
	pid_t child;
	int n;

	for (n = 0; n < 5; n++)
	{
		child = fork();
		if (child == 0)
		{
			execve(argv[0], argv, NULL);
		}
		else
		{
			printf("Waiting for process %u\n", child);
			sleep(2);
			wait(NULL);
		}
	}
	
	return (0);
}
