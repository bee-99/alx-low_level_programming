#include "main.h"

/**
 * *string_toupper - changes lower case to caps
 * @*:points to a character
 * Return: character *
 */

char *string_toupper(char *u)
{
	int n;

	for (n = 0; u[n] != '\0'; u++)
	{
		while (u[n] >= 65 && u[n] <= 90)
		{
			u[n] += 32;
		}
	}

	return (u);
}
