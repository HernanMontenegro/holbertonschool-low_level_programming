#include "hash_tables.h"

void free_node(hash_node_t *node);

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

	if (!ht || !key || strcmp(key, "") == 0 || !value || !ht->array)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		if (!new_node->value)
			free(new_node->key);
		else
			free(new_node->value);
		free(new_node);
		return (0);
	}
	if (!ht->array[indx])
		new_node->next = NULL;
	else
	{
		if (strcmp(new_node->key, ht->array[indx]->key) == 0)
		{
			free(ht->array[indx]->value);
			ht->array[indx]->value = strdup(new_node->value);
			if (!ht->array[indx]->value)
			{
				free_node(ht->array[indx]);
				return (0);
			}
			free_node(new_node);
			return (1);
		}
		else
			new_node->next = ht->array[indx];
	}
	ht->array[indx] = new_node;
	return (1);
}

/**
 * free_node - frees a node
 * @node: the node
 * ------------------------------
*/
void free_node(hash_node_t *node)
{
	if (node->key)
		free(node->key);
	if (node->value)
		free(node->value);
	free(node);
}
