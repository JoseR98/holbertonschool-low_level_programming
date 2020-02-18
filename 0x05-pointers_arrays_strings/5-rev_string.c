#include "holberton.h"

/**
 * rev_string -
 *
 * Return: 
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	i--; /* To make sure we aren't in the '\0' position. */
	for (j = 0; *(s + j) != *(s + i); j++)
	{
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		i--;
	}
}
