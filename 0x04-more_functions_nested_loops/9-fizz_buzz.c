#include <stdio.h>
/**
  * main - print number from 0 to 100.
  *
  * Return: always 0.
  */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", n);
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
