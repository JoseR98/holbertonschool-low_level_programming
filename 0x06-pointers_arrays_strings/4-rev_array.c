#include "holberton.h"

/**
 * reverse_array - Reverse an array
 * @a: pointer to the first array integer's address
 * @n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j = 0;
	int temp = 0;

	while (j < i)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i--;
		j++;
	}
}
