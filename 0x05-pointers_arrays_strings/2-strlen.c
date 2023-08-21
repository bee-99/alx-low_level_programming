#include "main.h"

/**
 * _strlen - counts number of a string
 *
 * @s: provides the numbers of char
 *
 * Return: number of strings t
 */

int _strlen(char *s)
{
	int t = 0;

	while (*s++ != '\0')
	{
		t++;
	}

	return (t);
}
