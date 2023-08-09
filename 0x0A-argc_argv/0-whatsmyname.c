#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 *
 * If you rename the program, it will print the new name,
 * without having to compile it again
 *
 * You should not remove the path before the name of the program
 *
 * @argc: count of arguments
 * @argv: array of arguments i.e the argument vector
 *
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
