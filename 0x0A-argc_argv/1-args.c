#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print number of command line arguments.
 * @argv: array of arguments
 * @argc: number of aruments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
