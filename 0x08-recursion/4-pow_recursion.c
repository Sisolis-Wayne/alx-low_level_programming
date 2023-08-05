#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y
 * @x: the number whose power is to be raised
 * @y: the exponent or the power itself
 *
 * Return: Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0 && x > 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}

	return (0);
}
