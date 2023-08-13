#include <stdio.h>

/**
 * main - printing alphabets except two letters using putchar function
 * Return: 0 Success
 */

int main(void)
{
	char str[] = "abcdfghijklmnoprstuvwxyz";
	int bet;

	for (bet = 0; bet <= 24; bet++)
	putchar(str[bet]);

	putchar('\n');

	return (0);
}
