#include "main.h"

/**
 *print_rev - prints a string in revers
 * @s: String output
 */

void print_rev(char *s)
{

	for (; *s == '\0'; s--)
	{
	_putchar(*s);
	}

	_putchar('\n');
}
