#include <stdio.h>

/**
 * main - printing base 10 and , using putchar function
 * Return: 0 Success
 */

int main(void)
{
	long int c = '0';

	for (c = '0'; c <= '9'; c++)
		putchar(c);
		putchar(,);
		putchar(' ');

	putchar('\n');

	return (0);
}
