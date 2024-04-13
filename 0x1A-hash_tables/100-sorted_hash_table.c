#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array of the hash table.
 *
 * Return: Pointer to the newly created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));

    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    ht->shead = NULL;
    ht->stail = NULL;
    return (ht); 
}
/**
 * shash_table_set - Adds/updates a key-value pair to a sorted hash table.
 * @ht: The hash table.
 * @key: The key (cannot be empty).
 * @value: The associated value (can be empty).
 *
 * Return: 1 on success, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	if (!ht || !key || !strcmp(key, ""))
		return (0);

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *node = ht->array[index], *new_node, *tmp;

    /* Search for existing key in linked list */
    while (node && strcmp(key, node->key) > 0)
        node = node->next;

    if (node && strcmp(key, node->key) == 0) 
    {
        free(node->value);
        node->value = strdup(value);
        return (1); 
    }

    /* Create new node */
    new_node = malloc(sizeof(shash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    if (!new_node->key || !new_node->value)
    {
        free(new_node->key);
        free(new_node->value);
        free(new_node);
        return (0);
    }

    /* Insert into linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Insert into sorted list */
    if (!ht->shead || strcmp(ht->shead->key, key) > 0)  
    {
        new_node->snext = ht->shead;
        new_node->sprev = NULL;
        if (ht->shead)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (!ht->stail)
            ht->stail = new_node;
    } else {
        tmp = ht->shead;
        while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
            tmp = tmp->snext;
        new_node->snext = tmp->snext;
        new_node->sprev = tmp;
        if (tmp->snext)
            tmp->snext->sprev = new_node;
        tmp->snext = new_node;
        if (!new_node->snext)
            ht->stail = new_node;
    }

    return (1); 
}

/**
 * shash_table_get - Retrieves the value associated with a key.
 * ... (implementation likely remains the same) ...
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    /* ... */
}

/**
 * shash_table_print - Prints the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	void shash_table_print()
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    /* ... */
}

/**
 * shash_table_delete - Deletes a hash table.
 */
void shash_table_delete(shash_table_t *ht) 
{
    /* ... */ 
}
