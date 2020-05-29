#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempn = NULL;
	hash_node_t *prev = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		tempn = ht->array[i];
		while (tempn != NULL)
		{
			prev = tempn;
			free(tempn->key);
			if (tempn->value != NULL)
				free(tempn->value);
			tempn = tempn->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
