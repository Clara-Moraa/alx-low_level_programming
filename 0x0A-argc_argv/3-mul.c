#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints multiplication of 2 numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s num1 num2\n", argv[0]);
		return (1);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);

	return (0);
}

