#include "holberton.h"
/**
  * print_alphabet_x10 - Print the alphabet 10 times in lower case.
  *
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	int t;
	char l;

	t = 0;

	while (t < 10)
	{
		l = 'a';
		while ('z' >= l)
		{
			_putchar(l);
			l++;
		}
		t++;
		_putchar('\n');
	}
}
