#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two string together
 * @s2: Char[] to append to dest
 * @s1: Char[] to be appended to
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}

	s1[i] = '\0';

	while (s1[k] != '\0')
	{
		k++;
	}
	return (k);
}
