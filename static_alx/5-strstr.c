#include "main.h"

/**
 * _strstr - finds the first occurence to a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer to the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *c = strstr(haystack, needle);

	return (c);
}
