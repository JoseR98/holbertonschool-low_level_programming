#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the sum of arguments of a program
 * @argc: count of arguments in the program
 * @argv: array of arguments of the program
 * Return: 1 if an error occurs and 0 if succes
 */
int number(char *s);

int main(int argc, char *argv[])
{
	int sum, i;

	if (argv[1] == '\0')
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (number(argv[i]))/* determine if the argument is a number*/
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
 *
 *
 *
 *
 */
int number(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (isdigit(s[j]))
		{
			return (0);
		}
	}
	return (1);
}
