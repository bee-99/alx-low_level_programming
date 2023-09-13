#include "function_pointers.h"

/**
 * int_index - searches for interger
 * @size: size of array
 * @cmp: pointer to function
 * @array: array
 * Return: index of element cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	while (size <= 0)
	{
		return (-1);
	}

	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]) && b != 0)
		{
		return (b);
		}
	}

	return (-1);
}
