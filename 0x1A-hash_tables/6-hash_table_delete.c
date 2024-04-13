#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp, *node;

	if (ht == NULL)  /* Check if hash table exists */
		return;
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);  /* Free the key */
			free(tmp->value); /* Free the value */
			free(tmp); /* Free the node */
		}
	}

	free(ht->array); /* Free the hash table array */
	free(ht); /* Free the hash table struct */
}
