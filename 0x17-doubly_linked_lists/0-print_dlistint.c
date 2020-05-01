#include "lists.h"
/**
 * print_dlistint - print elements of a double linked list
 * @h: pointer to first node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num_nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		num_nodes++;
		temp = temp->next;
	}
	return (num_nodes);
}
