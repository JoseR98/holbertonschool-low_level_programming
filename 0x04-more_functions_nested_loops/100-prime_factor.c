#include <stdio.h>
/**
  * main - Print largest prime factor
  * Return: i
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
		}
		else
		{
			printf("%ld", primo);
		}
		primo++;
	}
	return (0);
}
