#include "main.h"

/**
 * print_alphabet_x10 - Printing alphabets x10 using own header
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char pa10 = 'a';
	int ap10 = 0;

	for (ap10 = 0; ap10 < 10; ap10++)
	{
		for (pa10 = 'a'; pa10 <= 'z'; pa10++)
			_putchar(pa10);
		_putchar('\n');
	}
}
