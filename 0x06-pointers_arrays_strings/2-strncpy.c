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
		*(dest + i) = *(src + j);
		i++;
		j++;
		if (n >= 90)
		{
			*(dest + i) = '\0';
		}
	}
	return (dest);
}
