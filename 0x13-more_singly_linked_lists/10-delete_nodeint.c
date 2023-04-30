#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if the node is deleted, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp_next;
	unsigned int i;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
	temp_next = temp->next;
	temp->next = temp_next->next;
	free(temp_next);
	return (1);
}
