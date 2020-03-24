#include "lists.h"

/**
 * free_listint - free each node of a list
 * @head: pointer to the head of a list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head, *save_next;

	while (temp != NULL)
	{
		save_next = temp->next;
		free(temp);
		temp = save_next;
	}
}
