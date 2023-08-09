#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * Your program should print the result of the multiplication,
 * followed by a new line.
 * Both numbers and result of the multiplication can be stored in an integer.
 * If the program does not receive two arguments,
 * it prints Error, followed by a new line, and returns 1.
 *
 * @argc: count of argument
 * @argv: array of arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int m;
	int n;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);

	result = m * n;
	printf("%d\n", result);

	return (0);
}
