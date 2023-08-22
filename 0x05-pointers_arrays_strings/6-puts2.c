#include "main.h"


/**
 *puts2 - prints every other character
 * @str: String output
 */

void puts2(char *str)
{	
	int e;

	e = *str;
	

	for (e = 0; e <= 10; e++)

		while (e == e%2)
		{
			_putchar(*str);
		}
	
	_putchar('\n');

}
