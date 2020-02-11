#include "holberton.h"
/**
  * print_last_digit - Print last digit of an integer
  *
  * @x: integer number
  *
  * Return: integer
  */
int print_last_digit(int x)
{
	int l;

	l = x % 10;
	_putchar(l + '0');
	return (0);
}
