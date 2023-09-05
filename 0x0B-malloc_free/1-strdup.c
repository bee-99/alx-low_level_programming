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

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		c = malloc(sizeof(char) * str[l]);

		for (p = 0; str[p]; p++)
		{
			return (str);
		}
	}

	free(str);
	return (c);
}
