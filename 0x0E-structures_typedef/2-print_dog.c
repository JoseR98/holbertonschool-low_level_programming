#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print structure
 * @d: pointer to the structure address
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		;
	}
	if (!(d->name))
	{
		printf("Name: (nil)");
	}
	else if (!(d->age))
	{
		printf("Age: (nil)");
	}
	else if (!(d->owner))
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
