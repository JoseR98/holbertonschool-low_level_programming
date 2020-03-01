#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the sum of arguments of a program
 * @argc: count of arguments in the program
 * @argv: array of arguments of the program
 * Return: 1 if an error occurs and 0 if succes
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argv[1] == '\0')
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > 47 && argv[i][j] < 58 )
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
