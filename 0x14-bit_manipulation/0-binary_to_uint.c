#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string given as parameter
 * Return: Unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int size = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	size = _strlen(b);

	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			sum += 1 * _pow_recursion(2, size - 1);
		if (b[i] == '0')
			sum += 0 * _pow_recursion(2, size - 1);
		i++;
		size--;
	}
	return (sum);
}
/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer parameter
 *
 * Return: length of a string.
 */
unsigned int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer value
 * @y: integer value
 * Return: return unsigned integer value
 */
unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}