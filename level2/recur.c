#include <stdio.h>
#include <stdlib.h>

/**
 * Practice questions from yt
 * http://pastebin.com/gBnMXc2A
 */


int main()
{
	int ans = sumDigits(24738);

	printf("%d is the sum.\n", ans);

	return (0);
}

int sumDigits(int n)
{
	int sum = 0;

	if (n / 10)
	{
		sum = (n % 10) + sumDigits(n / 10);
	}
	else
	{
		return (n);
	}

	return (sum);
}
