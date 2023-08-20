#include <stdio.h>

/**
 * main - prints numbers and multiples
 *
 * Return: 0 success
 */

int main (void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n%3 == 0)
		{
			printf("Fizz ");
		}

		if (n%5 == 0)
		{
			printf("Buzz ");
		}

		if (n%3 == 0 && n%5 == 0)
		{
			printf("FizzBuzz ");
		}

		else
		{
			printf("%d ", n);
		}
	}

	printf("\n");

	return (0);
}


