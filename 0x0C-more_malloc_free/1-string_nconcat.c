#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 *
 * @s1: the string to be appended to
 * @s2: the string to append to s1
 * @n: the number of character of s2 to append to s1
 *
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	arr = malloc(sizeof(*arr) * (i + 1));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	while ((*s1 != 33) && (*s1 != '\0'))
	{
		arr[i] = *s1;
		i++;
		s1++;
	}
	while ((*s2 != 33) && (*s2 != '\0') && (n != 0))
	{
		arr[i] = *s2;
		i++;
		s2++;
		n--;
	}
	arr[i] = '\0';
	return (arr);
	free(arr);
}
