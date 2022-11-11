#include "main.h"

/**
 * _print - offsets a string one place to the left and prints the string
 * @str: string to offset
 * @l: size of the string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a charracter with a string and places the answer into dest
 * @n: char
 * @num: string
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start adding
 *
 * Return: pointer to dest, or NULL
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;

	/*  */
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		/* multiply the value in the argv[2][ti] with argv[1][j] and add the previous remainde */
		mul = (n - '0') * (num[j] - '0') + mulrem;
		/* divide mul by 10 and store, if argv2ti * argv1j was greater than 10, mulrem will have a value. else its 0 */
		mulrem = mul / 10;
		/* add the last digit of mul to dest[k](or a[k]) with whatever addrem was carried from previous loop */
		add = (dest[k] - '0') + (mul % 10) + addrem;
		/* give value to addrem if it got past 10, else it would be 0 */
		addrem = add / 10;
		/* take the last digit of add and insert to string + '0' converts to str */
		dest[k] = add % 10 + '0';
	}

	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		/* after j ends, add remainders to dest[k] till k reaches 0 */
		add = (dest[k] - '0') + addrem;
		addrem = add / 10;
		dest[k] = add % 10 + '0';
	}

	if (addrem)
	{
		return (NULL);
	}

	return (dest);
}

/**
 * check_for_digits - checks the arguments to ensure they are all digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int check_for_digits(char **av)
{
	int i, j;

	/* To check each digit since they are argv[1] and argv[2] */
	for (i = 1; i < 3; i++)
	{
		/* between one and two */
		for (j = 0; av[i][j]; j++)
		{
		/* for all elements in the number, check if its in 0-9 */
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}

	return (0);
}

/**
 * init - initializes a string with 0
 * @str: sting to initialize
 * @l: length of the string
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	/* make all members of a as 0, and end it with a null character */
	for (i = 0; i < l; i++)
		str[i] = '0';

	/* add the null byte */
	str[i] = '\0';
}

/**
 * main - multiply two strings
 * @argc: number of arguments
 * @argv: argv
 *
 * Return: zero, or exit status of 98 if failed
 */
int main(int argc, char *argv[])
{
	/* declaring some parameters */
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	/* Confirming that the arguments are exactly 3 or */
	/* if argv contains digits only */
	if (argc != 3 || check_for_digits(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}

	/* count the length of both strings 0 to no. of chars-1 */
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;

	ln = l1 + l2 + 1;

	/* allocate space to a, enough to contain the output exit 98 if null */
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}

	/* sets all the values to 0 */
	init(a, ln - 1);

	/* for each element in argv[2] multiply by argv[1] (backwards) */
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);

		/* if t returns NULL putc error and exit with 98 */
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}

	_print(a, ln - 1);
	return (0);
}
