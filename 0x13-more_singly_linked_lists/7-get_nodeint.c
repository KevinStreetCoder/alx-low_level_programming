
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: the head of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
