#include "main.h"
#include <stdlib.h>

/**
 *create_array - creaes array of chars
 *@size: provides size
 *@c: the char
 *Return: NULL if size 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int b;
	char *t;

	t = malloc(size * sizeof(char));

	while (size == 0)
	{
		return ('\0');
	}

	for (b = 0; b < size; b++)
	{
		t[b] = c;
	}

	return (t);
}
