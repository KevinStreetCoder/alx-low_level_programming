#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value of the range (inclusive)
 * @max: the maximum value of the range (inclusive)
 *
 * Return: a pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *b, i = 0;

	if (min > max)
		return (NULL);

	b = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (b == NULL)
		return (NULL);

	while (min <= max)
	{
		b[i] = min;
		i++;
		min++;
	}

	return (b);
}
