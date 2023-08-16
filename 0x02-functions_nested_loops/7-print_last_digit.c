#include "main.h"

/**
 * print_last_digit - prints last digit of number using putchar
 * @l: parameter that calls to print
 * Return: l Success
 */

int print_last_digit(int l)
{

	int n = l % 10;

	if (n >= 0)
	{
		_putchar(n + '0');
	}

	else if (n < 0)
	{
		int o = (-1) * n;
			_putchar(o + '0');
	}

	return (l);
}
