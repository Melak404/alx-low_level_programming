#include "main.h"

/**
  * swap_int - swap values
  *
  * @a: input
  * @b: input
  *
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
