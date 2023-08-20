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
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar(' ');
		}

		if (n%5 == 0)
		{
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}

		if (n%3 == 0 && n%5 == 0)
		{
			putchar('F');
			putchar('i');
			putchar('z');
			putchar('z');
			putchar('B');
			putchar('u');
			putchar('z');
			putchar('z');
			putchar(' ');
		}

		else
		{
			putchar(n + '0');
			putchar(' ');
		}
	}

	printf("\n");

	return (0);
}


