#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: number to be checked
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int y;

	y = _sqrt_recursion(n);

	if (y < 0)
	{
		if (n > 0)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}

/**
 * _sqrt_recursion - a program to find the square root of a number
 *
 * @n: the number whose square root is to be determined
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int m;

	m = square(n, 1);
	return (m);
}

/**
 * square - a function to help determine the square root of a number
 * by checking the square of the number
 *
 * @n: the number whose square root is to be determined
 * @curr: the square root of n
 *
 *Return: Always 0
 */

int square(int n, int curr)
{
	if ((curr * curr) == n)
	{
		return (curr);
	}
	else if ((curr * curr) < n)
	{
		return (square(n, curr + 1));
	}
	else
	{
		return (-1);
	}
}
