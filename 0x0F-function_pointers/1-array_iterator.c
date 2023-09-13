#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes function which is a parameter on arrays
 * @size: size of array
 * @action: pointer to function
 * @array: array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	while (action == NULL || array == NULL)
	{

	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
