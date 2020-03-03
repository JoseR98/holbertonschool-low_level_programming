#include "holberton.h"

/**
 * _strdup - Duplicate a string
 * @str: pointer to string
 * Return: if succes duplicate pointer otherwise NULL
 */
char *_strdup(char *str)
{
	unsigned int i, size, j;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0, size = 0; str[i] != '\0'; i++, size++)
		{
			;
		}
		duplicate = malloc(size);
		if (duplicate == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < size; j++)
		{
			duplicate[j] = str[j];
		}
	}
	return (duplicate);
}
