#include "hash_tables.h"

/**
 * hash_table_get - recover a value associated with a key
 * @ht: hash table to explore
 * @key: key of the value to recover
 *
 * Return: the value associated with the element,
 * or NULL if key is nowhere to be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = (ht->array)[index];

	while (node)
	{
		if (!strcmp(node->key, (char *)key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
