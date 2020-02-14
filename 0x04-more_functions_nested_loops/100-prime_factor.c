#include <stdio.h>
/**
  * main - Print largest prime factor
  * Return: i
  */
int main(void)
{
	long int numero = 612852475143, i = 2;

	while (numero != i)
	{
		if ((numero % i) == 0)
		{
			numero = numero / i;
		}
		else
		{
			i++;
		}
	}
	printf("%ld \n", i);
	return (0);
}
