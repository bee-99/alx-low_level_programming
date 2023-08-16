#include "main.h"

/**
 * _isalpha - locates all letters and outputs return value
 *@c: the character to be checked
 * Return: 1 success
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);

	else
		return (0);

	return (1);
}
