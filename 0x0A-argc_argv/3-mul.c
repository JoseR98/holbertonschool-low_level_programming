#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of first two arguments
 * @argc: count of the number of arguments
 * @argv: array with the arguments of the program
 * Return: 0 when succesful 1 when occur an error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}
