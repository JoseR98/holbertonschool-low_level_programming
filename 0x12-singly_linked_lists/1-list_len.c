#include "lists.h"

/**
 * list_len - find number of elements in a linked list
 * @h: pointer to other list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}

