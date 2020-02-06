#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char o;

	for (i = 0; i < 10; i++)
		{
		putchar(i + '0');
		}
	for (o = 'a'; o < 'g'; o++)
		{
		putchar(o);
		}
	putchar('\n');
	return (0);
}
