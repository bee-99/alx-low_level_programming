#include "main.h"

/**
 * times_table - prints 9 multiplication using loops
 *
 * Return: void
 */

void times_table(void)
{
	int n = 9;
	int t = 0;

	while (t >= 12)
	{
		int m = n * t;

		_putchar(m);
		t++;
	}
}
