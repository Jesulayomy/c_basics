#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

extern char **environ;

int main(int ac, char **av, char **env)
{
	int i;

	for (i = 0; environ[i] || env[i]; i++)
		printf("%s\n%s\n", env[i], environ[i]);

	return (0);
}
