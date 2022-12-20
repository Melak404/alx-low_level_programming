#include "main.h"

/**
  * _strlen - String length
  * @s: input
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	return (i);
}
