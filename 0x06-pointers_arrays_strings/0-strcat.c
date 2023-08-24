#include "main.h"

/**
 * *_strcat - pointer that concentrates two strings
 * @dest: contains the array
 * @src: contains the string
 * Return: dest for success
 */

char *_strcat(char *dest, char *src)
{

	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	int c = 0;

	dest = s2;
	src = s1;

	while (*dest != '\0')
	{
		dest++;
	}
	return (dest);

	while (*src != '\0')
	{
		_putchar(*src);
		continue;
	}
	return (src);

	for (c = 0; dest[c] == '\0' && src[c] == '\0'; c++)
	{
		_putchar(*src + c);
		_putchar(*dest + c);
	}
	return (dest);
}
