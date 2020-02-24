#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: string given
 * @accept: characters to match with
 * Return: char type
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (accept[b] != '\0')
		{
			break;
		}
		a++;
	}
	return (&s[a]);
}
