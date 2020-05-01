#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: pointer to first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
