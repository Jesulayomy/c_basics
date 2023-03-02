#include "shell.h"

/**
 * my_strlen - gets the length of a string
 * @str: string to count
 * Return: no of chars in the string
 */
int my_strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * my_strcpy - copies a string to another
 * @destination: container to insert copy
 * @source: string to be copied
 * Return: a pointer to the destination
 */
char *my_strcpy(char *destination, char *source)
{
	int i;

	for (i = 0; source[i] != '\0'; i++)
		destination[i] = source[i];

	destination[i] = '\0';
	return (destination);
}

/**
 * my_strcat - appends source to dest
 * @destination: an existing string
 * @source: string to be appended to destination
 * Return: a pointer to the destination
 */
char *my_strcat(char *destination, char *source)
{
	int i, j;

	for (i = 0; destination[i] != '\0'; i++)
		;

	for (j = 0; source[j] != '\0'; j++, i++)
		destination[i] = source[j];

	destination[i] = '\0';
	return (destination);
}

/**
 * my_strcmp - compares two strings
 * @str1: string1
 * @str2: string 2 to compare with
 * Return: int representing if true or not
 */
int my_strcmp(char *str1, char *str2)
{
	int n, d;

	for (n = 0, d = 0; (str1[n] != '\0' || str2[n] != '\0'); n++)
	{
		d = str1[n] - str2[n];
		if (d != 0)
			break;
	}

	if (d < 0)
		return (-1);
	else if (d > 0)
		return (1);

	return (d);
}

/**
 * my_strdup - duplicates a string
 * @str: to be duplicated
 * Return: the newly created string
 */
char *my_strdup(char *str)
{
	char *dup;
	size_t len;

	len = my_strlen(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	my_memcpy(dup, str, len + 1);
	return (dup);
}

/**
 * my_memchr - searches the memory for a character
 * @src_void: string to search
 * @c: the character to find
 * @length: of the string
 *
 * Return: nil
 */
void *my_memchr(const void *src_void, int c, size_t length)
{
	const unsigned char *src = (const unsigned char *)src_void;

	while (length-- > 0)
	{
		if (*src == c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}

/**
 * my_strtok - tokenizes a string
 * @str: strings to tokenize
 * @delim: iters to use
 * Return: a token
 */
char *my_strtok(char *str, const char *delim)
{
	static char *s;
	char *ret = NULL;

	if (str != NULL)
	{
		s = str;
	}
	if (s != NULL && strlen(s))
	{
		const size_t dlen = strlen(delim);
		/* Skip consecutive delimiters */
		while (*s && my_memchr(delim, *s, dlen) != NULL)
		{
			++s;
		}
		/* If the beginning of the token is not at the end of the string... */
		if (*s)
		{
			/* Set our retval to the first non-delim char */
			ret = s;
			/* Search for the next non-delim character, if any */
			while (*s)
			{
				if (my_memchr(delim, *s, dlen) != NULL)
				{
					break;
				}
				else
					++s;
			}
			if (*s)
			{
				/* Null-terminate the token and march the stored pointer forward */
				s[0] = 0;
				++s;
			}
		}
	}
	return (ret);
}

/**
 * free_arr2 - frees an array of arrays
 * @arr: array name
 * Return: nil
 */
void free_arr2(char **arr)
{
	int j;

	for (j = 0; arr[j] ; j++)
		free(arr[j]);
	free(arr);
}

/**
 * my_isdigit - check if a string contains digits only
 * @nstr: string to be checked
 * Return: 1 if digit, 0 if not digit
 */
int my_isdigit(char *nstr)
{
	int i;

	for (i = 0; nstr[i] != '\0' ; i++)
	{
		if (nstr[i] < 48 || nstr[i] > 57)
			return (0);
	}

	return (1);
}

/**
 * my_memcpy - copies data to another pointer with casts
 * @dest: dest to paste data
 * @src: source to copy data from
 * @size: length of data to copy
 * Return: nothing
 */
void my_memcpy(void *dest, const void *src, unsigned int size)
{
	char *ptr = (char *)src;
	char *new = (char *)dest;
	unsigned int i;

	for (i = 0; i < size; i++)
		new[i] = ptr[i];
}

/**
 * my_realloc - reallocates memory
 * @ptr: pointer previously allocated with malloc
 * @old_size: the previous poniter size
 * @new_size: new allocated size
 *
 * Return: pointer to new memory
 */
void *my_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		;

	memcpy(nptr, ptr, i);

	free(ptr);

	return (nptr);
}

/**
 * reverse_str - reverses a string
 * @string: to be reversed
 * Return: a pointer to the destination
 */
void reverse_str(char *string)
{
	char temp;
	int i, j, k;

	for (i = 0; string[i] != '\0'; i++)
		;

	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			temp = string[k];
			string[k] = string[k - 1];
			string[k - 1] = temp;
		}
	}
}

/**
 * my_atoi - converts a string to an integer.
 * @s: input string.
 *
 * Return: integer.
 */
int my_atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (s[count] != '\0')
	{
		if (size > 0 && (s[count] < '0' || s[count] > '9'))
			break;

		if (s[count] == '-')
			pn *= -1;

		if ((s[count] >= '0') && (s[count] <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((s[i] - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}

/**
 * mod_env - adds or modifies and environment variable
 * @shell: shell data
 *
 * Return: varaible with value
 */
char *mod_env(sh_data *shell)
{
	char *str;
	int len1;
	int len2;

	len1 = my_strlen(shell->arr[1]);
	len2 = my_strlen(shell->arr[2]);

	str = malloc(sizeof(char) * (len1 + len2 + 2));
	if (!str)
		return (NULL);

	my_strcpy(str, shell->arr[1]);
	my_strcat(str, "=");
	my_strcat(str, shell->arr[2]);

	return (str);
}
