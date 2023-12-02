#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size:  the size of the array.
 *
 * Return: NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = malloc(sizeof(hash_table_t));
    if (ht == NULL) {
        return NULL;
    }

    ht->size = size;
    ht->array = calloc(size, sizeof(hash_node_t *));
    if (ht->array == NULL) {
        free(ht);
        return NULL;
    }

    return ht;
}
