#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints its name, followed by
 * a new line. If you remove the program, it will print the new
 * name, without having to compile it again.
 * You should not remove the path before the name of the program
 *
 * @argc:  count of arguments
 * @argv: array of arguments i.e argument vector
 *
 * Return: 1
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("This program was called with \"%s\".\n", argv[0]);

	return (0);
}
