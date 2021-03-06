#include "lists.h"
/**
 * print_listint_safe - prints elements of a list
 * @head: pointer to the first node of list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int num_nodes;

	if (head == NULL)
		return (0);
	num_nodes = 0;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		num_nodes++;
		if (head->next > head)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			break;
		}
		head = head->next;
	}
	return (num_nodes);
}
