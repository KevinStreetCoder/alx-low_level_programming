#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located, or NULL if not found.
 */
listint_t* jump_list(listint_t* list, size_t size, int value)
{
    size_t step = sqrt(size);
    listint_t* current = list, * prev = NULL;

    if (!list)
        return (NULL);

    while (current->n < value)
    {
        prev = current;
        for (size_t i = 0; i < step && current->next; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

        if (!current->next)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
