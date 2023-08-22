#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array intergers
 * @a: pointer to interger
 * @n: number of arrays
 */

void print_array(int *a, int n)
{
	for (n = 0; n < *a;  n++)
	{
		printf("%i, ", n);
	}

	printf("\n");
}
