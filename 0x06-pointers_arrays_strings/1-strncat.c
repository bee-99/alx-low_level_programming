#include "main.h"

/**
 * *_strncat - pointer that concentrates two strings with n
 * @dest: contains the array
 * @src: contains the string
 * @n: number of bytes
 * Return: dest for success
 */

char *_strncat(char *dest, char *src, int n)
{

	char c1[98] = "Hello ";
	char c2[] = "World!\n";
	int c = 0;

	dest = c2;
	src = c1;
	n = 6;

	while (*dest != '\0')
	{
		dest++;
	}
	return (dest);

	while (*src != src[n])
	{
		_putchar(*src);
		continue;
	}
	return (src);

	for (c = 0; src[c] < n; c++)
	{
		_putchar(*src + c);
		_putchar(*dest + c);
	}
	return (dest);
}
