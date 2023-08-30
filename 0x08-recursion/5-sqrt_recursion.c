#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number returned
 * Return: n -1 unsuccessful
 */

int _sqrt_recursion(int n)
{
	int keeper;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		keeper = (n * n) / 2;
	}

	return (keeper);
}
