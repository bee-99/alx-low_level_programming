#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summs arguments together
 * @n: constant number of arguments
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int t;
	int b;

	va_list a;

	va_start(a, n);

	for (t = 0; t < n; t++)
	{
		b += va_arg(a, int);
	}

	if (n == 0)
	{
		return (0);
	}

	va_end(a);

	return (b);
}
