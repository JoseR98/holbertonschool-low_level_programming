#include "holberton.h"
/**
 * puts_half - prints half of a string
 *
 * @str: pointer parameter
 *
 * Return: void
 */
void puts_half(char *str)
{
	long length_st;
	int second_half = 0;
	int second_half2 = 0;

	length_st = 0;
	while (*(str + length_st) != '\0')
	{
		length_st++;
	}
	if (length_st % 2 == 0)
	{
		second_half = length_st / 2;
		while (*(str + second_half) != '\0')
		{
			_putchar(*(str + second_half));
			second_half++;
		}
		_putchar('\n');
	}
	else
	{
		second_half2 = (length_st - 1) / 2;
		while (*(str + second_half2) != '\0')
		{
			_putchar(*(str + second_half2));
			second_half++;
		}
	}
}
