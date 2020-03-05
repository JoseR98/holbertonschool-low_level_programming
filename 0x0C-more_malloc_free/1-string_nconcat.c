#include "holberton.h"
unsigned int _strlen(char *s);
/**
 * string_nconcat - concatenate first string with n bytes from the second one
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from second string
 * Return: pointer to a new allocated memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size2 = 0, j = 0, i = 0;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	if (n < _strlen(s2))
	{
		size2 = n;
	}
	else if (n >= _strlen(s2))
	{
		size2 = _strlen(s2);
	}
	p = malloc(sizeof(char) * (_strlen(s1) + size2 + 1));
	if (p == NULL)
		return (NULL);
	while (i < _strlen(s1))
	{
		p[i] = s1[i];
		i++;
	}
	while (j < size2)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
/**
 * _strlen - determine the lenght of string
 * @s: pointer to string
 * Return: unsigned integer (lenght of string)
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
