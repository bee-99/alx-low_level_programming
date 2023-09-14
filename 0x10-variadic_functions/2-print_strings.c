#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: string print between numbers
 * @n: constant number of intergers passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int v;
	char *s;

	va_list c;

	va_start(c, n);

	for (v = 0; v < n; v++)
	{
		s = va_arg(c, char*);
		
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{	
			printf("%s", s);
		}

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
