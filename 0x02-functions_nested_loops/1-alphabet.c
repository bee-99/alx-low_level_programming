#include "main.h"

/**
 * print_alphabet - Printing alphabets using main from own header
 *
 * Return: void
 */

void print_alphabet(void)
{
	char print_alphabet = 'a';

		for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
			_putchar(print_alphabet);

	_putchar('\n');
}
