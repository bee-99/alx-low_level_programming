#include "main.h"

/**
 * *_strncpy - pointer that copies number sring character
 * @dest: contains src
 * @src: contains the string
 * @n: number of strings
 * Return: dest for success
 */

char *_strncpy(char *dest, char *src, int n)
{

	int t;

	while (*dest != '\0')
	{
		dest++;
	}
	return (dest);

	while (*src != '\0')
	{
		src++;
	}
	return (src);

	*dest = *src;

	for (t = 0; src[t] < n; t++)
	{
		_putchar(*dest + t);
	}
	return (dest);
}
