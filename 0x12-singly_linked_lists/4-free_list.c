#include "lists.h"

/**
 * free_list - free the memory allocated
 * @head: pointer to struct
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}

