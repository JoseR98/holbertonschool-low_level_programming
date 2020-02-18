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
	char temp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	i--; /* To make sure we aren't in the '\0' position. */
	for (j = 0; *(s + j) != *(s + i); j++)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
		i--;
	}
}
