#include "holberton.h"
/**
 * argstostr - concatenates all arguments of main function
 * @ac: number of arguments
 * @av: pointer to the addres of first argument's character
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	char *p, *s;
	int i, letras;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0, letras = 1; i < ac; ++i, ++letras)
		{
			for (s = av[i]; *s; ++s, ++letras)
			{
				;
			}
		}
		p = malloc(sizeof(char) * letras);
		if (p == NULL)
		{
			return (NULL);
		}
		for (i = 0, letras = 0; i < ac; ++i, ++letras)
		{
			for (s = av[i]; *s; ++s, ++letras)
			{
				p[letras] = *s;
			}
			p[letras] = '\n';
		}
		p[letras] = '\0';
		return (p);
	}
}
