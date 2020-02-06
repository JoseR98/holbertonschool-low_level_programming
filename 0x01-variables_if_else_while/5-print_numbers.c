#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	d = 0;
	while (d <= 9)
	{
		printf("%d",d);
		d++;
	}
	putchar('\n');
	return (0);
}
