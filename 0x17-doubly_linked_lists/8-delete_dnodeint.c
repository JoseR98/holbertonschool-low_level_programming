#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index
 * @head: pointer to first node
 * @index: index in which is going to be deleted the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = *head, *enter_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		enter_node = temp->next;
		enter_node->prev = NULL;
		/*temp->prev = NULL;*/
		free(temp);
		*head = enter_node;
		return (1);
	}
	for (i = 0; i < index && temp != NULL; i++)
	{
		if (i + 1 == index)
		{
			enter_node = temp->next;
			temp->next = enter_node->next;
			if (enter_node->next != NULL)
				enter_node->next->prev = temp;
			free(enter_node);
			break;
		}
		else
			temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (1);
}
