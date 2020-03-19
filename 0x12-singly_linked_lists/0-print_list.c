#include "lists.h"
/**
 * print_list - Print all elements of a list.
 * @h: list structure.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes += 1;
	}
	return (nodes);
}
