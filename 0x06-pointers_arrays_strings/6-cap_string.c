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
	char p[13];

	p[0] = ' ';
	p[1] = '\t';
	p[2] = '\n';
	p[3] = ',';
	p[4] = ';';
	p[5] = '.';
	p[6] = '!';
	p[7] = '?';
	p[8] = '"';
	p[9] = '(';
	p[10] = ')';
	p[11] = '{';
	p[12] = '}';
	p[13] = '\0';
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if (*(s + i) == p[j])
			{
				if (*(s + i + 1) > 96 && *(s + i + 1) < 123)
				{
					*(s + i + 1) = *(s + i + 1) - 32;
				}
			}
		}
	}
	return (s);
}
