#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _puts(char *);
/**
 * main -
 *
 * Return: 0 at successful exit
 */

int main(void)
{
	char *t = "This is a story\nabout two bothers";

	_puts("Hel%%lo World");
	_puts(t);

	return(0);
}

int _puts(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		putchar(s[n]);
	putchar(10);

	return (n);
}
