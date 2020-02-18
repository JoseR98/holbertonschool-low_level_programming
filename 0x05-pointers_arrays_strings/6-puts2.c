#include "holberton.h"

/**
 * puts2 - Prints character of strings
 *
 * @str: pointer parameter to a string variable address.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
		}
		i++;
	}
	_putchar('\n');
}
