#include<stdio.h>

/**
 * main - Numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int a, b;

	for (i = 0; i < 12; i++)
	{
		printf("%d", i);
		printf(", ");

		a = b;
		b = i;
		i = a + b;
	}

	return (0);
}
