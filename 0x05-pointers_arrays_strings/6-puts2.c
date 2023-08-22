#include "main.h"


/**
 *puts2 - prints every other character
 * @str: String output
 */

void puts2(char *str)
{	
	int e;
	
	for (e = 0; e <= 10; e++)

		if (e == e%2)
		{
			e = *str;

			_putchar(*str);
		}
	
	_putchar('\n');

}
