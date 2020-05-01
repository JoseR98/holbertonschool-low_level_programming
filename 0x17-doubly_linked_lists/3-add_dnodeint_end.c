#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of the list
 * @head: pointer to the head of the list
 * @n: new value
 * Return: Address of new node otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *next = malloc(sizeof(dlistint_t));

	if (next == NULL)
		return (NULL);
	next->n = n;

	if (*head == NULL)
	{
		next->prev = NULL;
		next->next = NULL;
		*head = next;
		return (next);
	}

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = next;
	next->prev = temp;
	next->next = NULL;
	return (next);
}
