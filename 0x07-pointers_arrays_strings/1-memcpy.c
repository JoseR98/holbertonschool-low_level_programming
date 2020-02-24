#include "holberton.h"

/**
 * _memcpy - Copy a memory area
 * @dest: destiny memory area
 * @src: source memory area
 * @n: number of bytes to copie
 * Return: char type
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
