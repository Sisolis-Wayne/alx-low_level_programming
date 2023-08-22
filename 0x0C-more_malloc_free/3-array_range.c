#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 *
 * Prototype: int *array_range(int min, int max);
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * @min: the minimum number
 * @max: the maximum number
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(*arr) * (max + 1));

	if (arr == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < (max + 1); i++)
	{
		arr[i] = min;
		min++;
	}

    return (arr);
}
