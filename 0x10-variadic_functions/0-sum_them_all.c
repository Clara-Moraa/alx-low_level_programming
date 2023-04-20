#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters
 *
 * Return: 0 if n == 0, else; sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(vl, n);

	while (i < n)
	{
		sum += va_arg(vl, int);
		i++;
	}

	va_end(vl);

	return (sum);
}

