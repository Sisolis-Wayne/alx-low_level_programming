#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: the string to be printed between numbers
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str  == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);

		}
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
