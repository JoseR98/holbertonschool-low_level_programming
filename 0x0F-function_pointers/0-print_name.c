#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name
 * @name: name parameter
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((f != NULL) && (name != NULL))
		f(name);
	else
		return;
}
