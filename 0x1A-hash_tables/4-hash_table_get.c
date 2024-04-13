#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in the hash table
 * @ht: The hash table
 * @key: The key to look for
 *
 * Return: The value associated with the key, or NULL if the key isn't found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);  /* Handle invalid input */

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value); /* Key found, return the value */
		tmp = tmp->next;
	}
	return (NULL); /* Key not found */
}
