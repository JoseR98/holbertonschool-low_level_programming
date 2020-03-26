#include "holberton.h"

/**
 * get_bit - get bit at a given index
 * @n:unsigned integer given value 
 * @index: index of binary number
 * Return: 
 */
int get_bit(unsigned long int n, unsigned int index)
{
    return ((n >> index) & 1);
}