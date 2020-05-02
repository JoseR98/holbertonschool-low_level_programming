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
	dlistint_t *temp = NULL, *save_pos = NULL;
	dlistint_t *new_pos = malloc(sizeof(dlistint_t));

	if (new_pos == NULL || h == NULL || (*h == NULL && idx > 0))
		return (NULL);
	temp = *h;
	new_pos->n = n;
	new_pos->prev = NULL;
	new_pos->next = NULL;
	if (temp == NULL)
	{
		*h = new_pos;
		return (new_pos);
	}
	if (idx == 0)
	{
		new_pos->next = *h;
		temp->prev = new_pos;
		*h = new_pos;
		return (new_pos);
	}
	for (i = 0; i < idx && temp != NULL; i++)
	{
		if (i + 1 == idx)
		{
			save_pos = temp->next;
			if (save_pos == NULL)
				new_pos->prev = temp;
			temp->next = new_pos;
		}
		temp = temp->next;
	}
	temp->next = save_pos;
	if (save_pos != NULL)
	{
		temp->prev = temp->next->prev;
		temp->next->prev = temp;
	}
	return (new_pos);
}
