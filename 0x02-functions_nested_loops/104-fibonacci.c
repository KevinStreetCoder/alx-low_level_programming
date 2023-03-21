#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long int num1 = 1, num2 = 2, sum;

	printf("%lu, %lu", num1, num2);

	for (i = 0; i < 96; i++)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
	}

	printf("\n");

	return (0);
	}
