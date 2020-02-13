#include "holberton.h"
/**
  * print_line - prints a straight line.
  * @n: number of underscore to print.
  */
void print_line(int n)
{
	int number_prints = 0;

	while (number_prints < n && n > 0)
	{
		_putchar('_');
		number_prints++;
	}
	_putchar('\n');
}
