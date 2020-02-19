#include "holberton.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array
  *
  * @a: pointer to array of integers
  *
  * @n: number if integers in the array
  *
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
