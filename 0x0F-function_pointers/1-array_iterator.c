#include <stdio.h>
/**
 * array_iterator - executes a function on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: pointer to print function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((action == NULL) || (array == NULL) || size <= 0)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
