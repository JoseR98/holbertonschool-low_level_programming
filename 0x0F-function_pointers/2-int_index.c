#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to comparative fucntion
 * Return: integer value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				index = i;
				break;
			}
		}
		if (i == size)
		{
			return (-1);
		}
	}
	return (index);
}
