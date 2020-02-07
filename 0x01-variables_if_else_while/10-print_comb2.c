#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

	for (l = 0; l < 100; l++)
	{
		putchar(l / 10 + '0');
		putchar(l % 10 + '0');
		if (l != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
