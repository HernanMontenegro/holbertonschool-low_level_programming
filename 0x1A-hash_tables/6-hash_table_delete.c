#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 * ---------------------------------
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cursor = NULL, *aux = NULL;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		cursor = ht->array[i];
		while (cursor)
		{
			aux = cursor->next;
			free(cursor->key);
			if (cursor->value)
				free(cursor->value);
			free(cursor);
			cursor = aux;
		}
	}
	free(ht->array);
	free(ht);
}
