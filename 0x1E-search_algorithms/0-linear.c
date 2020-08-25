#include "search_algos.h"
/**
 * linear_search - performs linear search over a given array
 * @array: given array
 * @size: array size
 * @value: value to search
 * Return: index of value if it's found otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)index, (int)array[index]);
		if (array[index] == value)
		{
			return ((int)index);
		}
	}
	return (-1);
}
