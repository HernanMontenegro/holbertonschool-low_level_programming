#include "hash_tables.h"

/**
 * key_index - get a random key index
 * @key: the key string
 * @size: the table size
 * -----------------------------
 * Return: the random index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int key_pos = hash_djb2(key);

    return (key_pos % size);
}
