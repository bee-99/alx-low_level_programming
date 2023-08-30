#include "main.h"

/**
 * factorial - returns the factorial number
 * @n: the fatorial number
 * Return: -1 unsuccessful
 */

int factorial(int n)
{
	int keeper;

	if (n < 0)
	{
		return (-1);
	}

	else
	{
		keeper = n * factorial(n - 1);
	}

	return (keeper);
}
