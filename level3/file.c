#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int fd;
	char buf[13];

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		printf("Failed\n");
		exit (1);
	}

	write(fd, "Hello World\n", 12);

	close(fd);

	fd = open("myfile.txt", O_CREAT | O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to read.\n");
		exit (1);
	}

	read(fd, buf, 12);
	buf[12] = '\0';

	close (fd);

	printf("Buff: %s\n", buf);

	return (0);
}
