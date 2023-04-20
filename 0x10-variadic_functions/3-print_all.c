#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_c - prints a character
 * @c: character to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: list of argument types passed to the function
 *
 * Return: void
 *         Ignore any non char, integer, string (char *), or float type.
 *         Print nil, if string argument is NULL.
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list vl;
	char *separator = "";

	print_t struc[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(vl, format);

	for (i = 0; format && format[i]; i++)
	{
		for (j = 0; struc[j].type != NULL; j++)
		{
			if (*(struc[j].type) == format[i])
			{
				printf("%s", separator);
				struc[j].func(vl);
				separator = ", ";
				break;
			}
		}
	}

	va_end(vl);

	printf("\n");
}

