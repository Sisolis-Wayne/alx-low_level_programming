#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * Prototype: int int_index(int *array, int size, int (*cmp)(int));
 * if no element matches,  return -1
 * if size <= 0, return -1
 * @size: the size of the array
 * @array: an array of integers
 * @cmp: a function pointer used to compare values
 *
 * Return: the index of the first element for which the
 * cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		else if (cmp(array[i]) && i == (size - 1))
		{
			return (-1);
		}

		if (!cmp(array[i]) && i == (size - 1))
		{
			return (1);
		}
	}

	return (0);
}
