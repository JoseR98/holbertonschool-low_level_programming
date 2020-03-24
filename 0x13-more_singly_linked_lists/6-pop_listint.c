#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to head node of list
 * Return: head's node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n_value;

	if (*head == NULL)
		return (0);
	n_value = temp->n;
	*head = temp->next;
	free(temp);
	return (n_value);
}
