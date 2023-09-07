#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concentrates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 * Return: s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int n1;
	unsigned int n2;

	for (n1 = 0; n1 < (unsigned int)s1[n1]; n1++)
	{
		s1[n1]++;
	}

	for (n2 = 0; n2 < (unsigned int)s2[n2]; n2++)
	{
		s2[n2]++;
	}

	t = malloc(sizeof(char) * (unsigned long)(s1 + s2[n] + n + 1));

	while (!t)
	{
		return (NULL);
	}

	while (n >= (unsigned int)s2[n2])
	{
		t = s2;
		n2++;
	}

	while (s1 || s2 == NULL)
	{

	}

	return (t);
}
