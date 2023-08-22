#include "main.h"

/**
 *print_rev - prints a string in revers
 * @s: String output
 */

void print_rev(char *s)
{

	while (*s++ != '\0')
	{
		break;

		while (*s == '\0')
		{
			_putchar(*s--);
			_putchar(*s--);
		}
	}

	_putchar('\n');
}
