#include<stdio.h>

/**
 * main - a function  that computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0 (Always Success)
*/

int main(void)
{
	int m, sum;

	for (m = 0; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum += m;
		}
	}
	printf("%d\n", sum);
	return (0);
}
