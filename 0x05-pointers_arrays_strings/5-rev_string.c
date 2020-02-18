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
	int i = 0;
	int j;
	char *first = s;
	char *last = s;
	char temp;

	while (*(s + i) != '\0')
	{
		i++;
		last++;
	}
	--last; /* be sure that we aren't at '\0' position.*/
	for (j = 0; j < (i / 2); j++)
	{
		temp = *first;
		*first = *last;
		*last = temp;

		first++;
		last--;
	}
}
