#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string to be printed between strings
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (separator == NULL)
			break;
		if (string == NULL)
			printf("(nill)");
		printf("%s", string);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
