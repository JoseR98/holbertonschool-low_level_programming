#include "holberton.h"
/**
  * times_table - check the code for Holberton School students.
  */
void times_table(void)
{
	int filas;
	int columnas;
	int resultado;

	filas = 0;
	while (filas < 10)
	{
		columnas = 0;
		while (columnas < 10)
		{
			resultado = (filas * columnas);
			if (resultado >= 10)
			{
				_putchar((resultado / 10) + '0');
				_putchar((resultado % 10) + '0');
				if (columnas != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (resultado < 10)
			{
				_putchar((resultado % 10) + '0');
				if (columnas != 9 && (filas * (columnas + 1)) > 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (columnas != 9 && (filas * (columnas + 1)) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			columnas++;
		}
		filas++;
		_putchar('\n');
	}
}
