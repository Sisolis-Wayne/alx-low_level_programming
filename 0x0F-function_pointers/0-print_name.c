#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  a function that prints a name.
 *
 * @name: the name to be printed
 * @f: the function pointer
 *
 * Return: the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
