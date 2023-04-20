#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: Separator string to print between numbers.
 * @n: Number of numbers to print.
 *
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;
	int number;

	va_start(vl, n);

	while (i < n)
	{
		number = va_arg(vl, int);
		printf("%d", number);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(vl);
}

