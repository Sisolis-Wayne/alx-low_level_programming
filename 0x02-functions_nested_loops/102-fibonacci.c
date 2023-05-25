#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, counter;

	i = 1;
	j = 2;

	for (counter = 2; counter < 50; ++counter)
	{
		k = i + j;
		printf("%d, ", k);
		i = j;
		j = k;
	}

	printf("\n");
	return (0);
}
