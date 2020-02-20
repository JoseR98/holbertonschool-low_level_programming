#include "holberton.h"

/**
 * _strncpy -
 *
 * Return: 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	
	while (j < n && *(src + j) != '\0')
	{
		if (*(src + j) != '\n')
		{
			*(dest + i) = *(src + j);
		}
		else
		{
			*(dest + i) = '\n';
			*(dest + i + 1) = '\0';
		}
		i++;
		j++;
	}
	return (dest);
}
