#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of the double linked list
 * @head: pointer to the beginning of the list
 * @n: new value
 * Return: Address of the new node otherwise NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		new->next->prev = new;
		new->prev = NULL;
	}
	*head = new;
	return (new);
}
