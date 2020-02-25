#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print diagonals of a square matrix.
 * @a: matrix of integers
 * @size: size of matrix
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;

	while (i < size)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
