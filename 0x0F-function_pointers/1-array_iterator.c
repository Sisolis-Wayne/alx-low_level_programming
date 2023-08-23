#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array.
 *
 * @array: the input array
 * @size: the size of the array
 * @action: the function to be executed by array_iterator
 *
 * Return: nothing (void)
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}

	for (i = 0; i < (size); i++)
	{
		action(array[i]);
	}
}
