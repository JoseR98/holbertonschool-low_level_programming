#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int r;

	for (l = 0; l <= 9; l++)
	{
		for (r = l + 1; r <= 9; r++)
		{
			putchar(l + '0');
			putchar(r + '0');
			if (!(l == 8 && r == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
