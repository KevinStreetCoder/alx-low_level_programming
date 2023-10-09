#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using Advanced Binary search.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int advanced_binary(int* array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid, found = -1;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        mid = (left + right) / 2;

        if (array[mid] == value)
        {
            found = mid;
            right = mid - 1;
        }
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (found);
}
