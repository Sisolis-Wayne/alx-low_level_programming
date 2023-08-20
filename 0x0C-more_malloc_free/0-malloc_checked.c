#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the amount of memory to be allocated
 *
 * Return: a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *A = malloc(b);

	if (!A)
	{
		putchar(98);
		return (0);
	}

	return (A);
}
