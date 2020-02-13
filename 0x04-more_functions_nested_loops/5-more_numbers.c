#include "holberton.h"
/**
 * more_numbers - Print from 0 to 14 ten times.
 *
 */
void more_numbers(void)
{
	int f;
	int r;/* Number of times that is gona print*/

	for (r = 0; r <= 10; r++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f > 9)
			{
				_putchar((f / 10) + '0');

			}
			_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
