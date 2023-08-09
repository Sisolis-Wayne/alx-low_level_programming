#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 *
 * All arguments are printed, including the first one.
 * Only prints one argument per line, ending with a new line.
 *
 * @argc: count of argument
 * @argv: array of arguments i.e the argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
