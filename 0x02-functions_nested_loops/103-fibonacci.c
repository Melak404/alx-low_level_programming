#include<stdio.h>

/**
 * main - Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long i, j = 0, k = 1, l;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		j = k;
		k = l;

		if ((k % 2) == 0)
			l = l + k;
	}
	printf("%ld\n", l);
	return (0);
}
