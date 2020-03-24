#include "lists.h"
/**
 * reverse_listint - Reverse a list
 * @head: pointer to the first node
 * Return: pointer to the first node of reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *before;

	if (head == NULL || *head == NULL)
		return (NULL);

	before = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = next;
	}
	*head = before;
	return (*head);
}
