#include "holberton.h"
/**
 *
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_p, *old_p = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_p = malloc(new_size);
	if (new_p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < new_size && i && old_size; i++)
	{
		new_p[i] = old_p[i];
	}
	new_p = (void *)new_p;
	return (new_p);
}
