#include "holberton.h"
/**
 * _strstr - function finds the first occurrence of a substring 
 * @haystack: array principal
 * @needle: secondary array
 * Return: pointer to first ocurrence
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *new_position = haystack;
		while (*haystack == *needle && *haystack != 0 && *needle != 0)
		{
			needle++;
			haystack++;
		}
		if (*needle == 0)
		{
			return (new_position);
		}
		haystack++;
	}
	return (0);
}
