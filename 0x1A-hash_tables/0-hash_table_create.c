#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: the size of the hash table
 * -------------------------------------------
 * Return: the new table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t **array = malloc(size * sizeof(hash_node_t));

	if (!new_table || !array)
		return (NULL);

	new_table->size = size;
	new_table->array = array;

	return (new_table);
}
