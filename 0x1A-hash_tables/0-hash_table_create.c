#include "hash_tables.h"

/**
* create a hash table
*
* @size: array's size
* Return: return latest pointer
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc((size_t) size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}
