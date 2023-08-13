#include <stdio.h>
#include <unistd.h>

/**
 * main - printing with space and , using putchar function
 * Return: 0 Success
 */

int main(void)
{
	int c = '0';
	int n = '\n';

	while (c <= '8')
	{
		putchar(c);
		putchar(',');
		putchar(' ');
		c++;
		
	}

	if (c != 9)
		putchar(c);
	
	write (1, &n, 1);

	return (0);
}
