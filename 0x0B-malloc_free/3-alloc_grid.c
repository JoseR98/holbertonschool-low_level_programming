#include "holberton.h"

/**
 * alloc_grid - Fill an array of 2 dimensions
 * @width: width of the 2d array
 * @height: height of the 2d array
 * Return: integer pointer to a 2 dimension array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
	}
	return (p);
}
