#include <stdio.h>

/**
 * main - prints the first 50 fibonacci integers
 * Return: (0)
 */

int main(void)
{
	int num;
	long int j = 1;
	long int k = 1;
	long int sum;

	printf("%d", 1);
	for (num = 1; num <= 49; num++)
	{
		sum = j + k;
		printf(", %ld", sum);
		j = k;
		k = sum;
	}
	printf("\n");

	return (0);
}
