#include <stdlib.h>
int palabra(char *str);
/**
 * strtow - divide string
 * @str: string
 * Return: string word per word
 */
char **strtow(char *str)
{
	char **p;
	int j = 0, letras, palabras = 0, columnas, filas;/*num_p número de palabras; num_l número de letras en la palabra*/

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}
	palabras = palabra(str);/* determina el número de palabras en el string*/
	p = malloc(sizeof(p) * palabras + 1);/* guarda espacio de memoria para almacenar las palabras*/
	if (p == NULL)
	{
		return (NULL);
	}
	for (filas = 0; filas < palabras + 1; filas++)/* determina el número de letras de cada palabra y se asigna una ubicacion de memoria para la cantidad de letras*/
	{
		while (str[j] != '\0')
		{
			if ((str[j] > 64 && str[j] < 91) || (str[j] > 96 && str[j] < 123) || (str[j] > 32 && str[j] < 127))
			{
				if ((str[j + 1] > 64 && str[j + 1] < 91) || (str[j + 1] > 96 && str[j + 1] < 123))
				{
					letras++;
				}
				else
				{
					letras++;
					p[filas] = malloc(sizeof(char) * letras);/* asigna a la posición filas el número de letras que va a tener*/
					if (p[filas] == NULL)
					{
						return (NULL);
					}
					for (columnas = 0; columnas <= letras; columnas++)/* asigna letra por letra a cada posición de mi array*/
					{
						if (columnas < letras)
						{
							p[filas][columnas] = str[j + 1 + columnas - letras];
						}
						else if (columnas == letras)
						{
							p[filas][columnas] = '\0';
						}
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
int palabra(char *str)
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
