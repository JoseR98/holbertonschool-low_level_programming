#include "holberton.h"
/**
 * string_nconcat - concatenate first string with n bytes from the second one
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from second string
 * Return: pointer to a new allocated memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int size1 = 0, size2 = 0, j = 0, i = 0;

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
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (size2 > n)
		size2 = n;
	p = malloc(sizeof(char) * (size1 + size2 + 1));
	if (p == NULL)
		return (NULL);
	while (i < size1)
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

