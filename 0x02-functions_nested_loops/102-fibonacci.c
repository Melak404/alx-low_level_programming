#include<stdio.h>

/**
 * main - 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j = 0, k = 1, l;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		j = k;
		k = l;
		printf("%i", l);
		if (i == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
