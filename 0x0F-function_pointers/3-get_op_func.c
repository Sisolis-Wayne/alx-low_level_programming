#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - a function that selects the correct function
 * to perform the operation asked by the user.
 *
 * @s: the operator passed as argument to the program
 *
 * Return: 0 (Always success)
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 6)
	{
		if (*ops[i].op == *s)
			return (*ops[i].f);
		i++;
	}

	return (*ops[i].f);
}
