#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * -------------------------------------
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *cursor = NULL;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		cursor = ht->array[i];
		while (cursor)
		{
			printf("'%s': '%s'", cursor->key, cursor->value);
			if (cursor->next)
				printf(", ");
			cursor = cursor->next;
		}
		for (j = i + 1; j < ht->size; j++)
		{
			if (ht->array[j])
			{
				printf(", ");
				i = j - 1;
				break;
			}
		}
	}
	printf("}\n");
}
