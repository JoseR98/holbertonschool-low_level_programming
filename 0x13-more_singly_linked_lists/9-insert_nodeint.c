#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node in a list
 * @head: pointer to first element in the list
 * @idx: index to be placed the new element
 * @n:integer value for the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head, *save_pos = NULL;
	listint_t *new_pos = malloc(sizeof(listint_t));

	if (new_pos == NULL || head == NULL)
		return (NULL);
	new_pos->n = n;
	if (idx == 0)
	{
		new_pos->next = *head;
		*head = new_pos;
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
