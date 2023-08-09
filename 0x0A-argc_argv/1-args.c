#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * The program should print a number, followed by a new line.
 *
 * @argc: count of arguments.
 * @argv: array of arguments: the argument vector
 *
 * Return: Always 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));

	return (0);
}
