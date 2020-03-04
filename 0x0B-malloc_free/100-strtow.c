#include <stdlib.h>
int palabras (char *str);
/**
 * strtow - divide string
 * @str: string
 * Return: string word per word
 */
char **strtow(char *str)
{
	char **p;
	int i, j = 0, letras, palabras = 0, columnas, filas;/*num_p número de palabras; num_l número de letras en la palabra*/

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}
	palabras = palabras(str);/* determina el número de palabras en el string*/
	p = malloc(sizeof(p) * palabras);

	for (filas = 0; filas < palabras; filas++)/* determina el número de letras de cada palabra y se asigna una ubicacion de memoria para la cantidad de letras*/
	{
		while(str[j] != '\0')
		{
			if ((str[j] > 64 && str[j] < 91) || (str[j] > 96 && str[j] < 123))
			{
				if ((str[j + 1] > 64 && str[j + 1] < 91) || (str[j + 1] > 96 && str[j + 1] < 123))
				{
					letras++;
				}
				else
				{
					letras++;
					p[filas] = malloc(sizeof(char) * letras);
					for (columnas = 0; columnas < letras; columnas++)
					{
						p[filas][columnas] = str[j + 1 + columnas - letras];
					}
					letras = 0;
					j++;
					break;
				}
			}
			j++;
		}
	}
	return (p);
}
/**
 *
 *
 *
 */
int palabras (char *str)
{
	int i, palabras = 0;

	for (i = 0; str[i] != '\0'; i++)/* determina el numero de palabras del string*/
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			if ((str[i + 1] > 64 && str[i + 1] < 91) || (str[i + 1] > 96 && str[i + 1] < 123))
			{
				;
			}
			else
			{
				palabras++;
			}
		}
	}
	return (palabras);
}
