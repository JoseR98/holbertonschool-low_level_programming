#include "holberton.h"
/**
 * print_diagonal - Draw a diagonal on screen.
 * @n: integer value, number of diagonals to print.
 *
 */
void print_diagonal(int n)
{
	int number_prints = 0;

	while (number_prints < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			int position = 0;

			while (position < n)
			{
				if (position == number_prints)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
				position++;
			}
			_putchar('\n');
		}
		number_prints++;
	}
	_putchar('\n');
}
