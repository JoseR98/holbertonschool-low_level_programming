#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given index
 * @h: pointer to first node passed by reference
 * @idx: index in which is going to be inserted the node
 * @n: value to insert in that node
 * Return: address of new node on success otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp = *h, *save_pos = NULL;
	dlistint_t *new_pos = malloc(sizeof(dlistint_t));

	if (new_pos == NULL || h == NULL)
		return (NULL);
	new_pos->n = n;
	if (idx == 0)
	{
		new_pos->next = *h;
		*h = new_pos;
		return (new_pos);
	}
	for (i = 0; i < idx && temp != NULL; i++)
	{
		if (i + 1 == idx)
		{
			save_pos = temp->next;
			temp->next = new_pos;
		}
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	temp->next = save_pos;
	return (new_pos);
}
