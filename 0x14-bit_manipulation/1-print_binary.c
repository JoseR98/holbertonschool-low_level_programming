#include "holberton.h"

/**
 * print_binary - print number in binary
 * @n: unsigned int number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0)
		_putchar('0');
	rec_bin(n);
}
/**
 * rec_bin - Print from the last to the first number
 * @n: unsigned int number
 * Return: void
 */
void rec_bin(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	else
		n >> 1;
	_putchar(n & 1 + '0');
}
