#include "holberton.h"
int evaluate(int i, int j, char *s);
/**
 * is_palindrome - determine if a string is palindrome
 * @s: string given
 * Return: 1 if is palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int j, i = 0;

	j = _strlen_recursion(s);
	if (s[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (evaluate(i, j, s));
	}
}
/**
 * evaluate - evaluate if is palindrome or not
 * @i: movement from left to rigth
 * @j: movement from rigth to left
 * @s: string given
 * Return: 1 if is palindrome or 0 otherwise
 */
int evaluate(int i, int j, char *s)
{
	if (s[i] == s[j - 1] && i < j)
	{
		return (1 * evaluate((i + 1), (j - 1), s));
	}
	else if (j <= i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
