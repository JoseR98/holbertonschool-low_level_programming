#include "holberton.h"
/**
 * get_bit - get bit at a given index
 * @n:unsigned integer given value
 * @index: index of binary number
 * Return: bit at index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	return ((n >> index) & 1);
}
