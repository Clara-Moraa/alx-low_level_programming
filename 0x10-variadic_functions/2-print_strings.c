#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: Separator string to print between the strings.
 * @n: Number of strings to print.
 *
 * Return: void. If separator is NULL, don't print.
 *         If any string is NULL, print "(nil)" in its place.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;
	char *str;

	va_start(vl, n);

	while (i < n)
	{
		str = va_arg(vl, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(vl);
}

