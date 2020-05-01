#include "lists.h"

/**
 * get_dnodeint_at_index - get nth index of a node
 * @head: pointer to first node
 * @index: index of the node
 * Return: Index of the node otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
