#include <stdio.h>

/**
 * main - printing base 16 using putchar function
 * Return: 0 Success
 */

int main(void)
{
	int s = '0';

	for (s = '0'; s <= '%x.15'; s++)
		putchar(s);

	putchar('\n');

	return (0);
}
