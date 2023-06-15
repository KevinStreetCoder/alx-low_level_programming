#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return -1;

	current = *head;

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return 1;
	}

	/* Traverse the list to find the node at the given index */
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	/* If index is out of range */
	if (current == NULL)
		return -1;

	/* Update the previous node's next pointer */
	current->prev->next = current->next;

	/* Update the next node's previous pointer */
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return 1;
}
