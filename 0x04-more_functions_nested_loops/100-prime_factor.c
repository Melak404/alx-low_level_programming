#include <stdio.h>
#include <math.h>

/**
  * main - prrgest ime factor
  *
  * Return:  0
  */
int main(void)
{
	long i, j;
	long n = 612852475143;
	double sq = sqrt(n);

	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
		}
	}

	printf("%ld\n", j);

	return (0);
}
