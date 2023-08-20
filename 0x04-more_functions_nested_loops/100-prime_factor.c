#include <stdio.h>

/**
 * main - prints prime numbers
 *
 * Return: 0 Success
 */

int main(void)
{
	int p;
	long int n = 612852475143;

	for (p = 2; p * p <= n; p++)
	{
		while(n % p == 0)
		{
			putchar(p);
		}
	}

	putchar('\n');

	return(0);
}
