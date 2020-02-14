#include <stdio.h>

/**
  * main - prints largest prime factor
  *
  * Return: Always 0.
  */
int main(void)
{
	long int numero = 612852475143, primo = 2;

	while (primo <= numero)
	{
		if ((numero % primo) == 0)
		{
			if (numero != primo)
			{
				numero = numero / primo;
			}
			else
			{
				printf("%ld\n", i);
			}
		}
		i++;
	}
	return (0);
}
