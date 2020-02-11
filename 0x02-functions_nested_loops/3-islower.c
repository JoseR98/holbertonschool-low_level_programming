#include "holberton.h"
/**
  * _islower - check the code for Holberton School students.
  *
  *@c: entry parameter for _islower function, it's a letter.
  *
  * Return: 1 if c is lower case or 0 if not.
  *.
  */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
