#include "main.h"

/**
 * _isdigit - checks for digit 0 to 9
 *
 * Return: 1 success
 */

int _isdigit(int c)
{
	c = 48;

	if ( c <= 57)
	{
		return (1);
		c++;
	}

	else
	{
		return (0);
	}

	return(c);
}
