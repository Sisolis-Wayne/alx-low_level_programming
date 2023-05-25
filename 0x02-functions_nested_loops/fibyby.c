#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	unsigned long long int i, n;
	unsigned long long int t1 = 0, t2 = 1;
	unsigned long long int nextTerm = t1 + t2;

	printf("Enter the number of terms: ");
	scan("%ulli", &n);

	printf("Fibonacci Series: %ulli, %ulli, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		printf("%ulli, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
