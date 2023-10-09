#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int exponential_search(int* array, size_t size, int value)
{
    size_t bound = 1, min;

    if (array == NULL)
        return (-1);

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    min = (bound / 2) < (size - 1) ? (bound / 2) : (size - 1);

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);

    for (; bound <= min; bound++)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        if (array[bound] == value)
            return (bound);
    }

    return (-1);
}
