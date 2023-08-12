#include <stdio.h>

/**
 * main - printing base 10 using putchar function
 * Return: 0 Success
 */

int main(void)
{
	long int t = '0';

	for (t = '0'; t <= '9'; t++)
		putchar(t);

	putchar('\n');

	return (0);
}
