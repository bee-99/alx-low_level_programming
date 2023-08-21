#include "main.h"

/**
 *_puts - prints a string followed by new line
 * @str: String output
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
}
