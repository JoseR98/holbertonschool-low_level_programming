#include <stdio.h>
/**
 * main - Prints all arguments of a program
 * @argc: count of arguments of a program
 * @argv: array of arguments of a program
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > 0; argc--, i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
