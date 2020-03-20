#include "lists.h"

/**
 * add_node_end - add node to the end of a list
 * @head: first node
 * @str: string value for each node
 * Return: Pointer to next node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *temp = *head;
	list_t *next = malloc(sizeof(list_t));

	if (next == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	next->str = strdup(str);
	next->len = len;
	next->next = NULL;

	if (*head == NULL)
	{
		*head = next;
		return (next);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = next;
	return (next);
}

