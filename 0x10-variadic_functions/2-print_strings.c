#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @seperator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%s", va_arg(ap, char *));
		printf("%s", separator);
	}

	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}
