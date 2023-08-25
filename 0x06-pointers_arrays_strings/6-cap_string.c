#include "main.h"

/**
 * *cap_string- changes lower case to caps in setnence
 * @*:points to a character
 * Return: character *
 */

char *cap_string(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		while (s[c] >= 65 && s[c] <= 90)
		{
			if (s != ' ' ) 
			{

			}

			else
			{
				s[c] += 32;
			}
		}
	}

	return (s);
}
