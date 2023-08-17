#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two string together
 * @s2: Char[] to append to dest
 * @s1: Char[] to be appended to
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		i++;
		j++;
	}

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (*s1 != '\0')
	{
		arr[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0')
	{
		arr[i] = *s2;
		i++;
		s2++;
	}


	arr[i] = '\0';

	return (arr);
	free(arr);
}
