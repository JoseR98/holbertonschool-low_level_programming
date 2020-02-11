#include "holberton.h"
/**
  * _isalpha - Determine if the entry is an alphabet character.
  *
  * @c: int parameter wich stands for the letter.
  *
  *Return: 1 if it's a letter lower or upper case and 0 if not.
  */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
