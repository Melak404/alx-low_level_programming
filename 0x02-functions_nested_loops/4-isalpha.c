#include "main.h"

/**
 * _isalpha - identify lowercase characters
 * @c: input
 * Return: 1 if c is letter, lowercase or uppercase, Returns 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
