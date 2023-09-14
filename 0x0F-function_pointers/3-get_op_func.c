#include "function_pointers.h"

/**
 * get_op_func - function pointer select to perform task
 * @s: operator
 * Return: int
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops -> op[i])
	{
		i++;
	}

	if (*s != ops -> op[i])
	{
		return (NULL);
	}

	return (ops -> f);
}
