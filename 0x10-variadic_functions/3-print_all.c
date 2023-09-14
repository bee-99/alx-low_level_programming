#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format: lists type of arguments
 */

void print_all(const char * const format, ...)
{
	int b = 0;
	char c;
	int i;
	double f;
	char* s;
	int x = 0;

	va_list a;

	va_start(a, format);

	if ( format && format[x])
	{
		x++;
	}

	while (b < x)
	{

		while (format[b] == 'c' && format[b] == 'i' && format[b] == 'f' && format[b] == 's')
		{
			c = va_arg(a, int);
			printf("%c", c);

			i = va_arg(a, int);
			printf("%d", i);

			f = va_arg(a,double);
			printf("%f", f);

			s = va_arg(a, char*);
			printf("%s", s);

			b++;
		}

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{	

		}
	}

		printf("\n");

		va_end(a);
}
