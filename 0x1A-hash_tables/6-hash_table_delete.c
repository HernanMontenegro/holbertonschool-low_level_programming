#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: hash table to print
 * ------------------
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux = NULL;
	unsigned int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		while (ht->array[i])
		{
			aux = ht->array[i];
			free(aux->key);
			if (aux->value)
				free(aux->value);
			ht->array[i] = ht->array[i]->next;
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
