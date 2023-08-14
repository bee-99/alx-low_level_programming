#include <stdio.h>

/**
 * main - printing with space and , using putchar function
 * Return: 0 Success
 */

int main(void)
{
	long int c = '0';

	while  (c <= '9')
	{
		putchar(c);

		if (c != '9')
		{
			putchar (',');
			putchar (' ');
		}

		c++;
	}

	putchar('\n');

	return (0);
}
