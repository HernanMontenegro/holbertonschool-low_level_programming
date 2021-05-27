#include "hash_tables.h"

/**
 * hash_table_get - Get a value from hash table with a key
 * @ht: the hash table
 * @key: the key to look for
 * -----------------------------------
 * Return: the string value or NULL if fails
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i = 0;

    if (!ht)
        return (NULL);

    i = key_index((const unsigned char *)key, ht->size);
    if (ht->array[i] && strcmp(key, ht->array[i]->key) == 0)
        return (ht->array[i]->value);

    return (NULL);
}
