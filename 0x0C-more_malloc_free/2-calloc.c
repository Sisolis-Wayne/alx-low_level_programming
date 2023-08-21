#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * calloc - a function that allocates memory for an array, using malloc
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a
 * pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * 
 * Returns: NULL if the nmemb size is 0
 *          NULL if the malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;

    if ((nmemb == 0) || (size == 0))
    {
        return (NULL);
    }

    arr = malloc(nmemb * size);

    if (!arr)
    {
        return (NULL);
    }

    return (arr);
    free(arr);
}
