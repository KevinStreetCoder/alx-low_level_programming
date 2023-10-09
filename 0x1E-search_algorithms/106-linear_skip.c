#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located, or NULL if not found.
 */
skiplist_t* linear_skip(skiplist_t* list, int value)
{
    skiplist_t* current = list, * express;

    if (!list)
        return (NULL);

    while (current->next && current->n < value)
    {
        express = current->express;
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        current = express;

        if (!current->next)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, current->next->index);

    while (current && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return (current);
        current = current->next;
    }

    return (NULL);
}
