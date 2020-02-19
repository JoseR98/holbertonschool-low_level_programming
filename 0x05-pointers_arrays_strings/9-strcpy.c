#include "holberton.h"
/**
 * _strcpy - copies string from a pointer to a array of chars.
 * @dest: Array destination
 * @src: string parameter
 * Return: cahr
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (*(src + i) == '\0')
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
