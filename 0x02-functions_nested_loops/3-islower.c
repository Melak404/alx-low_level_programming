#include "main.h"

/**
 * _islower - identify lowercase characters
 * @c: input
 * Return: 1 if c is lowercase, Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}