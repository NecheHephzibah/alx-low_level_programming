#include "hash_tables.h"

/**
 * hash_table_get - function that retrieve the value associated with
 * a key in a hash table.
 * @ht: pointer to the hash table.
 * @key: The key to retieve the value associated with it.
 *
 * Return: the value associated with key in the table or NULL
 * if it doesn't match.
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
