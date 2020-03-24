#include "lists.h"

/**
 * listint_len - find the number of elements in a list
 * @h: pointer to a linked list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num_elements;

	for (num_elements = 0; h != NULL; num_elements++)
	{
		h = h->next;
	}
	return (num_elements);
}
