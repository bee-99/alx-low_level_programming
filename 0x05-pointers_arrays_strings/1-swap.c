#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Swaps from one interger
 * @b: To another
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
