#include "main.h"

/**
 * _sqrt_recursion - a program to find the square root of a number
 *
 * @n: the number whose square root is to be determined
 *
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
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
