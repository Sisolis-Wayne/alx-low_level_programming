#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: parameter
 *
 * Description: returns the length of the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter
 * Prototype: char *_strdup(char *str);
 * The _strdup() function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 * @str: the string to be copied
 *
 * Return: pointer of an array of chars
 */


char *_strdup(char *str)
{
	int buflen, i;
	char *arr;

	buflen = 1 + _strlen_recursion(str);
	arr = malloc(sizeof(char) * buflen);
	if (str == NULL)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= buflen; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
	free(arr);
}
