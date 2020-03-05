#include "holberton.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of member in the array
 * @size: size of each member
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (size * nmemb); i++)
		{
			p[i] = 0;
		}
		return (p);
	}
}
