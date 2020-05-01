#include "lists.h"

/**
 * dlistint_len - find number of elements in a double linked list
 * @h: pointer to first node
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num_nodes = 0;

	while (temp != NULL)
	{
		num_nodes++;
		temp = temp->next;
	}
	return (num_nodes);
}
