#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return hash;
}

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
	return NULL;

	ht->size = size;
	ht->array = malloc(size * sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
	free(ht);
	return NULL;
	}

	for (unsigned long int i = 0; i < size; i++)
	ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return ht;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = hash_djb2((unsigned char *)key) % ht->size;

	shash_node_t *node = ht->array[index];
	while (node != NULL)
	{
	if (strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return 1;
	}
	node = node->next;
	}

	shash_node_t *new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	return 0;

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = NULL;

	if (ht->array[index] != NULL)
	ht->array[index]->sprev = new_node;
	new_node->snext = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
	ht->shead = new_node;
	if (ht->stail == NULL || strcmp(key, ht->stail->key) > 0)
	ht->stail = new_node;

	return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = hash_djb2((unsigned char *)key) % ht->size;

	shash_node_t *node = ht->array[index];
	while (node != NULL)
	{
	if (strcmp(node->key, key) == 0)
		return node->value;
	node = node->next;
	}

	return NULL;
}

void shash_table_print(const shash_table_t *ht)
{
	printf("{");
	shash_node_t *node = ht->shead;
	while (node != NULL)
	{
	printf("'%s': '%s'", node->key, node->value);
	if (node->snext != NULL)
		printf(", ");
	node = node->snext;
	}
	printf("}\n");
}

void shash_table_print_rev(const shash_table_t *ht)
{
	printf("{");
	shash_node_t *node = ht->stail;
	while (node != NULL)
	{
	printf("'%s': '%s'", node->key, node->value);
	if (node->sprev != NULL)
		printf(", ");
	node = node->sprev;
	}
	printf("}\n");
}

void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
	return;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
	shash_node_t *node = ht->array[i];
	while (node != NULL)
	{
		shash_node_t *temp = node;
		node = node->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
	}

	free(ht->array);
	free(ht);
}

int main(void)
{
	shash_table_t *ht = shash_table_create(1024);
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	shash_table_set(ht, "z", "4");
	shash_table_print(ht);
	shash_table_set(ht, "n", "5");
	shash_table_print(ht);
	shash_table_set(ht, "a", "6");
	shash_table_print(ht);
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	shash_table_delete(ht);
	return 0;
}
