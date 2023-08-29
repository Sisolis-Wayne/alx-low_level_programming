#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function  runs the entire code from other function
 * files and prints the answer
 *
 * @argc: count of argument
 * @argv: array of arguments
 *
 * Return: 0 (Always success)
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	char *d;
	int result;

	d = argv[2];

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!d)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	m = atoi(argv[1]);
	n = atoi(argv[3]);

	result = get_op_func(d)(m, n);
	printf("%d\n", result);

	return (0);
}
