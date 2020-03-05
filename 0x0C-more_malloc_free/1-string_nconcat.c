#include "holberton.h"
void fill_all(char *s1, char *s2, char *p, unsigned int size1, unsigned int size2);
void fill_n_bytes(char *s1, char *s2, char *p, unsigned int size1, unsigned int n);
unsigned int _strlen(char *s);
/**
 * string_nconcat - concatenate first string with n bytes from the second string
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes to use from second string
 * Return: pointer to a new allocated memory space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

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
	if (n >= _strlen(s2))
	{
		p = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
		if (p == NULL)
			return (NULL);
		fill_all(s1, s2, p, _strlen(s1), _strlen(s2));
		return (p);
	}
	else
		p = malloc(sizeof(char) * (_strlen(s1) + n + 1));
		if (p == NULL)
			return (NULL);
		fill_n_bytes(s1, s2, p, _strlen(s1), n);
		return (p);
}
/**
 * fill_all - concatenates both strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @p: pointer to the new memory allocation
 * @size1: size of first string
 */  
void fill_all(char *s1, char *s2, char *p, unsigned int size1, unsigned int size2)
{
	unsigned int i = 0, j = 0;

	while (i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < size2)
	{	p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
}
/**
 * fill_n_bytes - concatenate the first string with n bytes of the second one
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @p: pointer to the new memory allocation
 * @size1: size of first string
 * @n: number of bytes to concatenate from the second string
 */
void fill_n_bytes(char *s1, char *s2, char *p, unsigned int size1, unsigned int n)
{
	unsigned int i = 0, j = 0;

	while (i < size1)
	{	p[i] = s1[i];
		i++;
	}
	while (j < n)
	{	p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
}
/**
 *
 *
 *
 */
unsigned int _strlen(char *s)
{	
	unsigned int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}