#include "main.h"

/**
 * print_alphabet_x10 - Prints a to z ten times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a, n;

	for (n = 0; n < 10; n++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
