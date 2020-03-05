#include "holberton.h"
unsigned int size_s1(char *s1);
unsigned int size_s2(char *s2);
void fill_all(char *s1, char *s2, char *p, unsigned int size1);
void fill_n_bytes(char *s1, char *s2, char *p, unsigned int size1, unsigned int n);
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

	if (n >= size_s2(s2))
	{
		p = malloc(sizeof(char) * (size_s1(s1) + size_s2(s2) - 1));
		if (p == NULL)
		{
			return (NULL);
		}
		fill_all(s1, s2, p, size_s1(s1));
		return (p);
	}
	else
	{
		p = malloc(sizeof(char) * (size_s1(s1) + n));
		if (p == NULL)
		{
			return (NULL);
		}
		fill_n_bytes(s1, s2, p, size_s1(s1), n);
		return (p);
	}
}
/**
 * size_s1 - determine the size of a string
 * @s1: pointer to a string
 * Return: return the size of a string
 */
unsigned int size_s1(char *s1)
{
	unsigned int size1 = 0;

	if (s1 == NULL)
	{
		s1[size1] = '\0';
	}
	while (s1[size1] != '\0')
	{
		size1++;
	}
	return (size1);
}
/**
 * size_s2 - determine the size of s2
 * @s2:input pointer to a string
 * Return: size of string 2
 */
unsigned int size_s2(char *s2)
{
	unsigned int size2 = 0;

	if (s2 == NULL)
	{
		s2[size2] = '\0';
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	return (size2);
}
/**
 * fill_all - concatenates both strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @p: pointer to the new memory allocation
 * @size1: size of first string
 */  
void fill_all(char *s1, char *s2, char *p, unsigned int size1)
{
	unsigned int i = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[i - size1] != '\0')
	{
		p[i] = s2[i - size1];
		i++;
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
	unsigned int i = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while ((i- size1) < n)
	{
		p[i] = s2[i - size1];
		i++;
	}
	p[i] = '\0';
}