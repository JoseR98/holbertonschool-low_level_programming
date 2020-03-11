#include "function_pointers.h"
/**
 * print_name - print name
 * @name: name parameter
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		return;
}
