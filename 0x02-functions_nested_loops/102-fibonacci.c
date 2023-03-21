#include <stdio.h>
#include "main.h"

/**
 * main - printd the first 50 fibonacci numbers
 *
 * Return: returns 0
 */
int main()
{
	int i, n = 50;
	long long int fib1 = 1, fib2 = 2, next;

	printf("%lld, %lld", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		next = fib1 + fib2;
		printf(", %lld", next);
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return 0;
}
