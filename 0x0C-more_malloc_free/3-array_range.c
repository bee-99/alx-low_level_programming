#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of intergers
 * @min: minimum interger
 * @max: maximum interger
 * Return: to int point
 */

int *array_range(int min, int max)
{
	int *a;
	int n;
	int t;

	t = max - min + 1;

	a = malloc(sizeof(int) * t);

	for (n = 0; min <= max; n++)
	{
		a[n] = min++;
	}

	while (min > max && a == NULL)
	{
		return (NULL);
	}

	return (a);
}
