#include "holberton.h"

/**
 * _raiz - find square root of a number
 * @x: integer value (sqrt)
 * @n: integer value
 * Return: integer value (square root)
 */
int _raiz(int x, int n)
{
	if ((x * x) == n)
	{
		return (x);
	}
	else if ((x * x) > n)
	{
		return (-1);
	}
	else
	{
		return (_raiz((x + 1), n));
	}
}
/**
 * _sqrt_recursion - Return the square root of a number
 * @n: integer value
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	int result, x = 0;

	if (n > 0)
	{
		result = _raiz(x, n);
		return (result);
	}
	else
	{
		return (-1);
	}
}
