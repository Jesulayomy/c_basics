#include <stdio.h>
#include <stdlib.h>

/**
 * countVowels - counts the number of vowels in a string
 * @s: the string
 *
 * Return: the no of vowels n
 */

int main()
{
	char str1[] = "Hello World";
	int num = countVowels(str1);

	printf("The number of vowels in %s is %d\n", str1, num);

	return (0);
}

int countVowels(char *s)
{
	int n = 0, count = 0;

	while (s[n] != '\0')
	{
		if (s[n] == 'a')
		{
			count += 1;
		}
		else if (s[n] == 'e')
		{
			count += 1;
		}
		else if (s[n] == 'o')
		{
			count += 1;
		}

		n++;
	}
	return (count);
}
