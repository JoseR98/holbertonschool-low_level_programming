#include "holberton.h"

/**
 * _strncat - Concatenate n bytes of one string to another
 * @dest: pointer to the address of first string's character
 * @src: pointer to the address of first string's character
 * @n: number of bytes to concatenate
 * Return: char string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j  < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
