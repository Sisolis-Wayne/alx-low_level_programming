#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * Print the result, followed by a new line.
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 * You can assume that numbers and the addition of all the
 * numbers can be stored in an int.
 *
 * @argc: count of argument
 * @argv: array of argument
 *
 * Return: Always 0.
 *
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int index;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		if ((*argv[index] < 48) || (*argv[index] > 57))
		{
			printf("Error\n");
			return (1);
		}

		result += atoi(argv[index]);
	}

	printf("%d\n", result);
	return (0);
}
