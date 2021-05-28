#include "hash_tables.h"

/**
 * hash_table_set - add a new item in the table
 * @ht: the hash table
 * @key: the hash table key
 * @value: the value of that key
 * -----------------------------------------------
 * Return: 1 if worked, 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx = 0;
	hash_node_t *new_node = NULL;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
	new_node->key = malloc((strlen(key) + 1) * sizeof(char));
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = malloc((strlen(value) + 1) * sizeof(char));
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}


	new_node->key = strcpy(new_node->key, key);
	new_node->value = strcpy(new_node->value, value);

	if (!ht->array[indx])
		new_node->next = NULL;
	else
		new_node->next = ht->array[indx];

	ht->array[indx] = new_node;
	return (1);
}
