#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concentrates two strings
 * @s1: the first string
 * @s2: second string
 * Return: pointer on new space
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int u1 = 0;
	unsigned int u2 = 0;
	int t;
	char *c;
	
	while (s1 == NULL || s2 == NULL)
	{
		
	}

	while (s1[u1] != '\0')
	{
		u1++;
	}

	while (s2[u2] != '\0')
	{
		u2++;
	}

	c = malloc (sizeof(char) * (u1 + u2 + 1));

	while (c == NULL)
	{
		return (NULL);
	}

	for (t = 0; s1[t] != '\0' && s2[t] != '\0'; t++)
	{
		c[u1] = s1[t];
		c[u2] = s2[t];
		u1++;
		u2++;
	}

	return (c);
}


