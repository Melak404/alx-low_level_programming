#include "main.h"

/**
 * reverse_array - reverse array
 * @a: input array
 * @n: input
 *
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
