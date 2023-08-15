#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * @size: size of the array.
 *
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * (size + 1));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}

	/*
	 * for (i = 0; i < size; i++)
	 * {
	 *	putchar(*(arr + i));
	 * }
	 */

	return (arr);
	free(arr);

	/*
	 * return (0);
	 */
}
