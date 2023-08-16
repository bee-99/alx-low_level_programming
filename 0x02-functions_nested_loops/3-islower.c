#include "main.h"

/**
 * _islower - locates lowercase letters and outputs return value
 *@c: the character to be checked
 * Return: 1 success
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);

	return (1);
}
