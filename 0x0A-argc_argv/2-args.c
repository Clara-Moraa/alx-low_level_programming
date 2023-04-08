#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argv: array of arguments.
 * @argc: number of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\i", argv[i]);
	}
	return (0);
}
