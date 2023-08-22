#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array intergers
 * @*a: pointer to interger
 * @n: number of arrays
 */

void print_array(int *a, int n)
{
	 *a = n;

	 while (n != '\0')
	 {
		printf("%i, ", n);
	 }

	 printf("\n");
}
