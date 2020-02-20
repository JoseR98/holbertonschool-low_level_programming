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
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
