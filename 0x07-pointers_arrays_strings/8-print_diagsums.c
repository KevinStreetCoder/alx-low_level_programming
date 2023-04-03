#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: A pointer to the first element of the matrix.
 * @size: The size of the matrix.
 * 
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag_sum_1 = 0, diag_sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		diag_sum_1 += *(a + i * size + i);
		diag_sum_2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", diag_sum_1, diag_sum_2);
}
