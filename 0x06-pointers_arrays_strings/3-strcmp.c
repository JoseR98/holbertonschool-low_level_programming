#include "holberton.h"

/**
 * _strcmp - Compare two strings
 * @s1: pointer to char type
 * @s2: pointer to char type
 * Return: result integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		result = (s1[i] - '0') - (s2[i] - '0');
	}
	else if (s1[i] == s2[i])
	{
		result = (s1[i] - '0') - (s2[i] - '0');
	}
	return (result);
}
