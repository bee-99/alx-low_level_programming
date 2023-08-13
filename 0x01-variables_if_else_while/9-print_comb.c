#include <stdio.h>

/**
 * main - printing with space and , using putchar function
 * Return: 0 Success
 */

int main(void)
{
	int c = '0';
	
	while (c <= '8')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
		
	}

	if (c != 9)
		putchar(c);

	return (0);
}
