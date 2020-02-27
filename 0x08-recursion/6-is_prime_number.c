#include "holberton.h"
/**
 * primo - determine if a number is prime or not
 * @x: integer value
 * @n: integer value
 * Return: 1 if is prime 0 otherwise 
 */
int primo(int x, int n)
{
	if ((n % x == 0) && n != x)
	{
		return (0);
	}
	else if ((n % x == 0) && x == n)
	{
		return (1);
	}
	else
	{
		return (primo((x + 1), n));
	}
}
/**
 * is_prime_number - determine if a number is prime or not
 * @n: integer value
 * Return: result
 */
int is_prime_number(int n)
{
	if (n > 1)
	{
		return (primo(2, n));
	}
	else
	{
		return (0);
	}
}
