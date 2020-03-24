#include "lists.h"

/**
 * get_nodeint_at_index - go through the nth node of a list
 * @head: pointer to the first node
 * @index: index of the node
 * Return: Address of the nth node that specifies the index parameter
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}
