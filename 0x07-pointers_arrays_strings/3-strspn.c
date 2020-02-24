#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:input string
 * @accept: characters to accept
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	unsigned int bytes = 0;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				bytes++;
				break;
			}
		}
		if (accept[b] == '\0')
		{
			break;
		}
		a++;
	}
	return (bytes);
}
