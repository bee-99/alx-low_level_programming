#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string print between numbers
 * @n: constant number of intergers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	int u;

	va_list c;

	va_start(c, n);

	for (t = 0; t < n; t++)
	{
		u = va_arg(c, int);
		printf("%d", u);

		if (*separator != '\0')
		{
			printf("%s", separator);
		}
		else if (separator == NULL)
		{

		}
	}

	va_end(c);

	printf("\n");
}
