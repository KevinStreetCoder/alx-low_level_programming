#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	unsigned long int add1, add2;

	if (head == NULL)
		return (0);

	while (head)
	{
		add1 = (unsigned long int)head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		add2 = (unsigned long int)head;
		count++;
		if (add1 == add2)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (count);
}
