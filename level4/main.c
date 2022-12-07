#include "main.h"

int main(void)
{
	int count;

	count = _printf("Hello World\n");
	count = printf("Hello World\n");
	_printf("\n");
	printf("\n");
	_printf("%c", 'h');
	printf("%c", 'h');
	_printf("\n");
	printf("\n");
	_printf("%s", "Hello World");
	printf("%s", "Hello World");
	_printf("\n");
	printf("\n");
	_printf("%%");
	printf("%%");
	_printf("\n");
	printf("\n");
	_printf("%c %s %%", 'K', "three");
	printf("%c %s %%", 'K', "three");
	_printf("\n");
	printf("\n");
	_printf("A character: %c\nA string: %s\n and %%", 'X', "Berny");
	printf("\n");
	printf("A character: %c\nA string: %s\n and %%", 'X', "Berny");
	_printf("\n");

	return (0);
}
