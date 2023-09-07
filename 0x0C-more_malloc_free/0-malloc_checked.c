#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: memory alocated
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	while (p == NULL)
	{
		exit(98);
	}

	return (p);
}
