#include <stdio.h>
/**
 * print_name - print name
 * @name: name parameter
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
