#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list
 *
 * @h: head of list
 *
 * Return: size of list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (count);

	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	free(*h);
	*h = NULL;
	return (count);
}
