#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to int variable address
 * @index: index of bit we want to set
 * Return: 1 on success otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int delete_bit;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	delete_bit = 1 << index;
	*n = *n & ~(delete_bit);
	return (1);
}
