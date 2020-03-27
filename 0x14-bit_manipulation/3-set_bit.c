#include "holberton.h"
/**
 * set_bit - set the value of a bit at a given index
 * @n: pointer to variable's address
 * @index: index for setting the bit
 * Return: integer value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int add_bit;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	add_bit = 1 << index;
	*n = *n | add_bit;
	return (1);
}
