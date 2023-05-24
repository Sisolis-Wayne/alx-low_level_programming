#include "main.h"

/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i, size;

	size = sizeof(ch) / sizeof(char);
	for (i = 0; i < size; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
