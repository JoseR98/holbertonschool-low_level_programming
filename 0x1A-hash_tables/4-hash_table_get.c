#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: pointer to hash table
 * @key: is the key
 * Return: associated element with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *temp;
    char *value;

    if (key == NULL || ht == NULL)
        return (NULL);
    index = key_index((const unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(key, temp->key) == 0)
        {
            value = temp->value;
            break;
        }
        temp = temp->next;
    }
    if (temp == NULL)
        return (NULL);
    return (value);
}
