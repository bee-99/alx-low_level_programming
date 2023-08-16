#include "main.h"

/**
 *print_sign - locatesi and prints sign of numbers and outputs return value
 *@n: the character to be checked
 * Return: n success
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		{
			if (n > 48)
				return (1);
		}

	}

	else if (n == 0)
	{
		_putchar(48);
		{
			if (n == 0)
				return (0);
		}
	}

	else if (n < 48)
	{
		_putchar(45);
		{
			if (n < 48)
				return (-1);
		}
	}

	return (n);
}
