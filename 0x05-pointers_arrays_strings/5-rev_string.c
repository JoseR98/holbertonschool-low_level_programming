#include "holberton.h"
/**
 * rev_string - Reverse string.
 *
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	char *first = s;
	char *last = s;
	char temp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		last++;
	}
	--last;/* To make sure we aren't in the '\0' position. */
	--i;
	for (j = 0; *(s + j) != *(s + i); j++)
	{
		temp = *last;
		*last = *first;
		*first = temp;
		++first;
		--last;
		--i;
	}
}
