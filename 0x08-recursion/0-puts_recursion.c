#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
