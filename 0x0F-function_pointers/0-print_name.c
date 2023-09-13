#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: provides name string
 * @f: pointer to the name
 */

void print_name(char *name, void (*f)(char *))
{
	while (name == NULL && f == NULL)
	{

	}

	f(name);
}
