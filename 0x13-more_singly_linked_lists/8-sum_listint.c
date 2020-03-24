#include "lists.h"

/**
 * sum_listint - add all data(n) of a list
 * @head: pointer to the first
 * Return: sum of all data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
