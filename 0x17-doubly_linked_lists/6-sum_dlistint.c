#include "lists.h"

/**
 * sum_dlistint - sum all elements of a double linked list
 * @head: pointer to first node
 * Return: sum of all elements if list is empty return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
