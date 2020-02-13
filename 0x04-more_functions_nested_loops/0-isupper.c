#include "holberton.h"
/**
  * _isupper - Checks for upperchase character.
  *
  *@c: integer parameter.
  *
  * Return: 1 if is uppercase 0 otherwise.
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
