#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * -------------------------------------
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *cursor = NULL;
	char *result = NULL;

	if (!ht)
		return;

	result = strdup("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		cursor = ht->array[i];
		while (cursor)
		{
			result = strcat(result, cursor->key);
			result = strcat(result, "': ");
			result = strcat(result, "'");
			result = strcat(result, cursor->value);
			result = strcat(result, "'");
			if (cursor->next)
				result = strcat(result, ", ");
			cursor = cursor->next;
		}
		result = strcat(result, ", ");
	}
	result[strlen(result) - 3] = '\0';
	result = strcat(result, "}");

	printf("%s\n", result);
}
