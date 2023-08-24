#include "main.h"

/**
 * reverse_array - reverses array contents
 * @a: numbers
 * @n: reverse number
 */

void reverse_array(int *a, int n)
{
	int t;

	for (t = 0; a[t] >= n; t--)
	{
		(a[t]--);
	}
}
