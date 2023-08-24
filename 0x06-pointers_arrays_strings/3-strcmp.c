#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: 0 success
 */

int _strcmp(char *s1, char *s2)
{

	char s = 65;
	char c = 97;

	int t;
	int sum = s1 - s2;
	int b;
	int sum2 = s2 - s1;

	*s1 = s;
        *s2 = c;

	while (s >= 65 && s <= 90)
	{
		s++;
		return (s);
	}

	while (c >= 97 && c <= 122)
	{
		c++;
		return(c);
	}

	for (t = 0; s1[t] > s2[t]; t++) 
	{
		return (sum = s1[t] - s2[t]);
	}

	for (b = 0; s2[b] > s1[b]; b++)
	{
		return (sum2);
	}

	return(sum2);

}
