#include "holberton.h"
/**
  * _isdigit - Check for a digit between 0 and 9.
  *
  * @c: integer number.
  *
  * Return: 1 if is a digit between 0 and 9 otherwise 0.
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
