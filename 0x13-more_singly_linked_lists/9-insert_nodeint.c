#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to the head of the list
  * @idx: index of the list to add the new node
  * @n: int to add to the new node
  * Return: the address of the new node or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_node, *tmp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	if (idx == 0)
	{
		add_node->next = *head;
		*head = add_node;
		return (add_node);
	}
	while (tmp && count < (idx - 1))
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->next = tmp->next;
	tmp->next = add_node;
	return (add_node);
}
