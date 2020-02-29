#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the sum of arguments of a program
 * @argc: count of arguments in the program
 * @argv: array of arguments of the program
 * Return: 1 if an error occurs and 0 if succes
 */
int main(int argc, char *argv[])
{
	int sum, i;
	
	(void)argc;
	if (argv[1] == '\0')
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; argv[i] != '\0'; i++)
		{
			if (! atoi(argv[i]) % 10 )
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
