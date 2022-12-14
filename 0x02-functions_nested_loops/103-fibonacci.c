#include<stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long i = 0, j = 1, k = 2, l = k;

	while (k + j < 4000000)
	{
		k = k + j;

		if ((k % 2) == 0)
			l = l + k;
		j = k - j;

		++i;
	}

	printf("%ld\n", l);
	return (0);
}
