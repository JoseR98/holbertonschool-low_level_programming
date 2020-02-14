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
		if ((numero % i) == 0)
		{
			if (numero != primo)
			{
				numero = numero / i;
			}
		}
		else
		{
			i++;
		}
	}
	printf("%ld \n", i);
	return (0);
}
