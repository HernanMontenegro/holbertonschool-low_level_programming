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
	unsigned long int indx = key_index((unsigned char *)key, ht->size);
	hash_node_t *aux = NULL;

	if (!ht || strcmp(key, "") == 0)
		return (0);
	if (!ht->array[indx])
	{
		ht->array[indx] = malloc(ht->size * sizeof(hash_table_t));
		ht->array[indx]->key = malloc((strlen(key) + 1) * sizeof(char));
		ht->array[indx]->value = malloc((strlen(value) + 1) * sizeof(char));
		if (!ht->array[indx] || !ht->array[indx]->value)
			return (0);
		ht->array[indx]->key = strcpy(ht->array[indx]->key, key);
		ht->array[indx]->value = strcpy(ht->array[indx]->value, value);
		return (1);
	}
	aux = ht->array[indx];
	while (aux)
	{
		if (!aux->next)
		{
			aux->next = malloc(sizeof(hash_node_t));
			aux->next->key = malloc((strlen(key) + 1) * sizeof(char));
			aux->next->value = malloc((strlen(value) + 1) * sizeof(char));
			aux->next->next = NULL;
			if (!aux->next)
				return (0);
			if (!aux->next->value || !aux->next->key)
			{
				free(aux->next);
				return (0);
			}
			aux->next->key = strcpy(aux->next->key, key);
			aux->next->value = strcpy(aux->next->value, value);
			break;
		}
		aux = aux->next;
	}
	return (1);
}
