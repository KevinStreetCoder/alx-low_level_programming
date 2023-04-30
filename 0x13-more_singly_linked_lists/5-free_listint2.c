#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
