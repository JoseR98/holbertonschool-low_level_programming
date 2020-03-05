#include "holberton.h"
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to an array of integers
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(int) * ((max - min) + 1));
		for (i = 0; min <= max; i++)
		{
			p[i] = min;
			min++;
		}
		return (p);
	}
}
