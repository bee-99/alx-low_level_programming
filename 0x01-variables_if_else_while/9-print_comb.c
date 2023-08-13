#include <stdio.h>

/**
 * main - printing base 10 and , using putchar function
 * Return: 0 Success
 */

int main(void)
{
	char c = '0';
	
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
