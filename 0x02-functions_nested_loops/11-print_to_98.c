#include <stdio.h>
/**
  * print_to_98 - check the code for Holberton School students.
  *
  * @n: integer number.
  *
  * Return: Always 0.
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		putchar('\n');
	}
	else
	{
		for (; n > 97; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
