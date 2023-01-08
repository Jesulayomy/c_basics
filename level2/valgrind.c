#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main(__attribute__((unused)) int argc,__attribute__((unused)) char *argv[])
{
	char *s;
	int i;

	i = 0;
	while (1)
	{
		s = malloc(INT_MAX);
		if (s == NULL)
		{
			printf("Can't allocate %d bytes (after %d calls)\n", INT_MAX, i);
			return (1);
		}
		s[0] = 'H';
		i++;
	}
	return (0);
}
