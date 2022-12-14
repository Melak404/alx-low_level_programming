#include "main.h"

/**
 * print_sign - prints sign of input
 * @n: input
 * Return: return 1 for positive, 0 for zero, -1 for negative input
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{	_putchar ('-');
		return (-1);
	}
}
