#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr_node = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	curr_node = ht->array[index];
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
			return (curr_node->value);
		curr_node = curr_node->next;
	}

	return (NULL);
}
