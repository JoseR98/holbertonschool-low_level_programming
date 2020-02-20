#include "holberton.h"

/**
 * string_toupper - Changes lowercase letters to uppercase
 * @s: pointer to a array of char types
 * Return: char type
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) > 96 && *(s + i) < 123)
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}
