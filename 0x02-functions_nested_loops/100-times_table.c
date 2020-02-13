#include "holberton.h"
/**
  * print_times_table - check the code for Holberton School students.
  * @n: integer number between 0 and 15.
  */
void print_times_table(int n)
{
	int colum, filas = 0, result;

	filas = 0;
	for (filas = 0; filas <= n && n > 0 && n < 15; filas++)
	{
		colum = 0;
		while (colum <= n)
		{
			result = colum * filas;
			if (colum == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
			}
			colum++;
		}
		_putchar('\n');
	}
}
