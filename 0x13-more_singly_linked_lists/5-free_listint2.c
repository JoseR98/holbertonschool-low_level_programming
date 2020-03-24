#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: parameter given as reference
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head, *save_next;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		save_next = temp->next;
		free(temp);
		temp = save_next;
	}
	*head = NULL;
}
