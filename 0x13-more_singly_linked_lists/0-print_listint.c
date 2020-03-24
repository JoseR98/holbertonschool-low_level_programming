#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to a node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num_nodes;

	for (num_nodes = 0; h != NULL; num_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_nodes);
}
