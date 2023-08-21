#include "main.h"

/**
 *print_rev - prints a string in revers
 * @s: String output
 */

void print_rev(char *s)
{

	char *str;

	while (*str == '\0')
	{
		str--;
		*str = *s;
		_putchar(*s--);
	}

	_putchar('\n');
}
