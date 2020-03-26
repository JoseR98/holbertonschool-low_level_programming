#include "holberton.h"
/**
 * get_bit - get bit at a given index
 * @n:unsigned integer given value
 * @index: index of binary number
 * Return: bit at index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (n == 0 && index > 0)
        return (-1);
    if (!(n >> index))
        return (-1);
    return ((n >> index) & 1);
}
