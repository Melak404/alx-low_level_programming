#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  Print to 98
 * @n: input
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%i", i);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%i", i);
			printf(",");
			printf(" ");
		}
	}

	printf("98\n");
}
