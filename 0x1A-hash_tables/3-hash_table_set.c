#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: is the key
 * @value: value of the key
 * Return: 1 on success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL, *temp = NULL;

	if (key == NULL || value == NULL || ht == NULL || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL) /*Validate if the slot is empty or not*/
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		if (ht->array[index]->key == NULL)
			return (0);
		ht->array[index]->value = strdup(value);
		if (ht->array[index]->value == NULL)
			return (0);
		ht->array[index]->next = NULL;
		return (1);
	}
	/*a collision occurs*/
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
