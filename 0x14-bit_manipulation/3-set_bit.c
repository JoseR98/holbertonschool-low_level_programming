#include "holberton.h"
/**
 * set_bit - set the value of a bit at a given index
 * @n: pointer to variable's address
 * @index: index for setting the bit
 * Return: integer value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = 1;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	*n = *n >> index | bit;
	*n = *n << index;
	return (1);
}
