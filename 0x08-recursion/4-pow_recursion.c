#include "main.h"

/**
 * _pow_recursion - returns value of x power of y
 * @x: the powered value
 * @y: the power
 * Return: -1 unsuccesful
 */

int _pow_recursion(int x, int y)
{
	int keeper;
	int keeps;

	if (y < 0)
	{
		return( -1 );
	}

	else
	{
		keeper = x^y; 
		keeps = keeper - 1;
	}

	return(keeps);
}
