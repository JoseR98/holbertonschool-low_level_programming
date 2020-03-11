#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function to get the type of operator
 * @s: operator
 * Return: pointer to operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
