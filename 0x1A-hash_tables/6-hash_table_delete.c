#include "hash_tables.h"

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
            free(cursor);
            cursor = aux;
        }
    }
}
