#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 *
 * @n: a const value of type unsigned int that represents
 * the number of arguments
 *
 * Return: the sum of all the arguments passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);
	return (result);
}
