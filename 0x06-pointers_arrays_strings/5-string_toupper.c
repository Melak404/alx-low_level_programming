#include "main.h"

/**
 * string_toupper - change case
 * @s: Input
 * Return: Changed string
 */
char *string_toupper(char *s)
{
	char *i = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (i);
}
