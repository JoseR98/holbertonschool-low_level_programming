#include "holberton.h"
/**
  * swap_int - swap values if two integers.
  *
  * @a: integer value.
  *
  * @b: integer value.
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
