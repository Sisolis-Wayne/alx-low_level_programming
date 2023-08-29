#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that adds two numbers
 *
 * @a: the first number
 * @b: the first number
 *
 * Return: the sum of the two numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that gives the difference between two numbers
 *
 * @a: the first number
 * @b: the first number
 *
 * Return: the difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two numbers together
 *
 * @a: the first number
 * @b: the first number
 *
 * Return: the product of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides the first number by the second
 *
 * @a: the first number
 * @b: the first number
 *
 * Return: the quotient of the two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that gives the modulo of one number divided by another
 *
 * @a: the first number
 * @b: the first number
 *
 * Return: the remainder when the first number is divided by the second number
 */

int op_mod(int a, int b)
{
	return (a % b);
}
