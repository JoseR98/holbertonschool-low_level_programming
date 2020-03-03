#include "holberton.h"

/**
 * create_array - create an array of chars
 * @size: size of the array parameter
 * @c: char parameter
 * Return: pointer to allocated memory - NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size);
		for (i = 0; i < size; i++)
		{
		p[i] = c;
		}
	}
	return (p);
}
