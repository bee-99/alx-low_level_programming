#include <stdio.h>

/**
 * main - printing base 16 using putchar function
 * Return: 0 Success
 */

int main(void)
{
	int s;
	char t;

	for (s = 0; s <= 9; s++)
		putchar('0' + s);

	for (t = 'a'; t <= 'f'; t++)
		putchar(t);

	putchar('\n');

	return (0);
}
