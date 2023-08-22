#include "main.h"

/**
 * put_half - prints half string followed by new line
 * @str: prints he half string
 */

void puts_half(char *str)
{
	int l;
	int h;
	int p;

	l = *str;

	while (*str != '\0')
	{
		l++;
	}

	h = (l - 1) /2;

	for (p = 0; p > h; p++)
	{
		_putchar(l);
	}
}



