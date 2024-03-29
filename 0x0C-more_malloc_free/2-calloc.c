#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a
 * pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * @nmemb: the number of elements of the array
 * @size: the size of the array
 *
 * Return: a pointer to the memory of the allocaated array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	char *filler;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (!arr)
	{
		return (NULL);
	}

	filler = arr;
	for (i = 0; i < (nmemb * size); i++)
	{
		filler[i] = 0;
	}


	return (arr);
}
