#include "holberton.h"

/**
 * flip_bits - determine the number bits to flip
 * @n: first int value
 * @m: value to convert to
 * Return: number of bits to flip to change from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_dif, num_bits = 0;

	/**count the number of differences*/
	num_dif = n ^ m;
	/** implement Brian Kernighan's Algorithm*/
	while (num_dif)
	{
		num_bits += num_dif & 1;
		num_dif >>= 1;
	}
	return (num_bits);
}
