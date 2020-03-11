#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Perform basics operations of a calculator
 * @argc: number of arguments passed by command line
 * @argv: vector of arguments passed by command line
 * Return: Operation value
 */
int main(int argc, char **argv)
{
	int num1, num2, sum;
	char *operator = argv[2];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	if (((*operator == '/') || (*operator == '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(99);
	}
	sum = (*get_op_func(operator))(num1, num2);
	printf("%d\n", sum);
	return (0);
}