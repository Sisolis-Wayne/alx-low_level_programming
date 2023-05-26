#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* main - a program that prints the first 50 Fibonacci numbers,
* starting with 1 and 2, followed by a new line.
* The numbers must be separated by comma, followed by a space ,
*
* Return: 0 (Always)
*/

int main(void)
{
	unsigned long long int i;
	unsigned long long int t1 = 1, t2 = 2;
	unsigned long long int nextTerm = t1 + t2;

	printf("%llu, %llu, ", t1, t2);

	for (i = 3; i < 50; ++i)
	{
		printf("%llu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (i == 49)
		{
			printf("%llu", nextTerm);
		}
	}

	printf("\n");

	return (0);
}
