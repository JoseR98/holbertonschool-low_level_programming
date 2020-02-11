#include "holberton.h"
/**
  * _abs - computes absolute value of an integer.
  *
  * @t: Integer number.
  *
  * Return: absolute int number.
  */
int _abs(int t)
{
	if (t > 0)
	{
		t = t;
	}
	else if (t < 0)
	{
		t = -t;
	}
	else
	{
		t = 0;
	}
	return (t);
}
