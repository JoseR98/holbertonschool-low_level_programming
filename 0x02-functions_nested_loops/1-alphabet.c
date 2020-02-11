#include "holberton.h"
/**
  * print_alphabet - print alphabet in lower case form a to z.
  *
  * Return: Always 0.
  */
void print_alphabet(void)
{
	char c;

	c = 'a';
	while ('z' >= c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
