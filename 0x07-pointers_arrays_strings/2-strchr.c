#include "main.h"

/**
 * _strchr - function locates a character in string
 * @s: string
 * @c: character to locate
 * Return: s if found success
 */

char *_strchr(char *s, char c)
{
	int n;

	s = &c;

	for (n = 0; n < s[n]; n++)
	{
		if (*s != '\0')
		{
			return ('\0');
		}
	}
		return (s);

}
