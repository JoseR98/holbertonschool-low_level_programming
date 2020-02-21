#include "holberton.h"

/**
 * cap_string - Change from lowercase to uppercase
 * @s: pointer to array of characters.
 * Return: array of characters
 */
char *cap_string(char *s)
{
	int i;
	int j;
	char p[] = " \t\n,;.!\?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if (s[i] == p[j])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
