#include "lists.h"

/**
 * add_node - add node to a linked list at the beginning
 * @head: address passed by reference
 * @str: value for the new node
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	list_t *new;
	unsigned int len_str;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (len_str = 0; s[len_str] != '\0'; len_str++)
		;
	new->str = s;
	new->len = len_str;
	new->next = *head;
	*head = new;
	return (new);
}

