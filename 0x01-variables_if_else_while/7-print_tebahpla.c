#include <stdio.h>

/**
 * main - printing in reverse lowercase using putchar function
 * Return: 0 Success
 */

int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	putchar(za);

	putchar('\n');

	return (0);
}
