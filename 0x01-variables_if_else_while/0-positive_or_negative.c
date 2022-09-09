#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main-prints if number is positive, zero or negative
 *
 * Return: Always(success)
 */

int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%i is zero\n", n)
	}

	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}

	else
	{
		printf("%i is positive\n", n);
	}

	return (0);
}
