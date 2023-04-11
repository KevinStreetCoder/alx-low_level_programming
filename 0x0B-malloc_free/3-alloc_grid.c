#include "main.h"

/**
 * alloc_grid - allocates memory for a 2D array of integers.
 * @width: the width of the 2D array.
 * @height: the height of the 2D array.
 *
 * Return: If width or height is 0 or negative, return NULL.
 * If memory allocation fails, return NULL.
 * Otherwise, return a pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows of the 2D array. */
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	/* Allocate memory for the columns of the 2D array. */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			/* Free memory for the rows that have been allocated. */
			for (j = 0; j < i; j++)
			free(grid[j]);

			/* Free memory for the rows. */
			free(grid);
			return (NULL);
		}

		/* Initialize all elements to 0. */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
