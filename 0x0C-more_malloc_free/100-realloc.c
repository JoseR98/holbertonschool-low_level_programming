#include "holberton.h"
/**
 * _realloc - Reallocate a memory block
 * @ptr: pointer to a memory allocation
 * @old_size: old size of memory allocation
 * @new_size: new size for the new pointer
 * Return: void
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
	free(old_p);
	return (new_p);
}
