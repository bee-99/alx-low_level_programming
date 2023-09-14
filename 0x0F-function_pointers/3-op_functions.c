#include <stdio.h>
#include "function_pointers.h"

/**
 * op_add - function that adds
 * @a: first int
 * @b: second int
 * Return: the sum
 */

int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - function that subtracts
 * @a: first int
 * @b: second int
 * Return: the answer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtion that multiplies
 * @a: first int
 * @b: second int
 * Return: answer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides
 * @a: first int
 * @b: second int
 * Return: answer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that reurns remainder
 * @a: first int
 * @b: second int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
