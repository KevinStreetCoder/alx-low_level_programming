#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using Interpolation search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int interpolation_search(int* array, size_t size, int value)
{
    size_t left = 0, right = size - 1, pos;

    if (array == NULL)
        return (-1);

    while (left <= right && value >= array[left] && value <= array[right])
    {
        if (left == right)
        {
            if (array[left] == value)
                return (left);
            return (-1);
        }

        pos = left + (((double)(right - left) /
            (array[right] - array[left])) * (value - array[left]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            left = pos + 1;
        else
            right = pos - 1;
    }

    return (-1);
}
