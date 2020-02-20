#include "holberton.h"
/**
 * _strcat - Concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: char type
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;/* Take the number of characters in the string*/

	while (*(dest + i) != '\0')/* determine the number of characters*/
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
