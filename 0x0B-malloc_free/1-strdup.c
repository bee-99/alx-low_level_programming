#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new space in memory
 * @str: the string copy
 * Return: NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *c;
	int p;
	unsigned int l = 0;

	while (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{
		l++;
	}

	c = malloc(sizeof(char) * (str[l] + 1));

	for (p = 0; str[p] > p; p++)
	{
		c[p] = str[p];
	}

	return (c);
}
