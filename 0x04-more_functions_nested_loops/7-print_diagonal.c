#include "holberton.h"
/**
 * print_diagonal - Draw a diagonal on screen.
 * @n: integer value, number of diagonals to print.
 *
 */
void print_diagonal(int n)
{
	int number_prints = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

		while (number_prints < n)
		{

			int position = 0;

			while (position != number_prints)
			{
				_putchar(' ');
				position++;
			}
			_putchar('\\');
			_putchar('\n');

			number_prints++;
		}
	}
}
