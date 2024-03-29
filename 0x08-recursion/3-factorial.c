#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number whose factorial is to be calculated
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

	return (0);
}
