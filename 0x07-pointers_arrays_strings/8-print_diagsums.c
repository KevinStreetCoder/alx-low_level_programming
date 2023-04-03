#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: 2D array of ints
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0;
	int diag2 = 0;
	int i;

	for (i = 0; i < (size * size); i += size + 1)
		diag1 += a[i];

	for (i = size - 1; i < (size * size) - 1; i += size - 1)
		diag2 += a[i];

	printf("%d, %d\n", diag1, diag2);
}
