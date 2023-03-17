#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number
 * Checks if it is greater than 0,
 * equals to zero
 * or is less than zero
 * Return: o
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
