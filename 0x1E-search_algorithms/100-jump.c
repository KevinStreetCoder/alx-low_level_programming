#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located, or -1 if not found.
 */
int jump_search(int* array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;

    if (array == NULL)
        return (-1);

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;

        if (prev >= size)
            break;
    }

    size_t min = prev - step;

    printf("Value found between indexes [%lu] and [%lu]\n", min, prev);

    for (; min < size; min++)
    {
        printf("Value checked array[%lu] = [%d]\n", min, array[min]);
        if (array[min] == value)
            return (min);
        if (array[min] > value)
            break;
    }

    return (-1);
}
