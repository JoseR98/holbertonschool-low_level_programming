#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i, j = 0;
    hash_node_t *temp;

    if (ht != NULL)
    {
        printf("{");
        for (i = 0; i < ht->size; i++)
        {
            temp = ht->array[i];
            if (temp != NULL)
            {
                while (temp != NULL)
                {
                    if (j == 0)
                    {
                        printf("'%s': ", temp->key);
                        printf("'%s'", temp->value);
                        j = 1;
                    }
                    else
                    {
                        printf(", '%s': ", temp->key);
                        printf("'%s'", temp->value);
                    }
                    temp = temp->next;
                }
            }
        }
        printf("}");
    }
    printf("\n");
}
