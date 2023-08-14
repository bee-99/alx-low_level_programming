#include <stdio.h>

/**
 * main - printing with space and , using putchar function
 ')* Return: 0 Success
 */

int main(void)
{
	long int f;
	long int s;

	for (f = '0'; f <= '9'; f++)
	{
		for (s = '0'; s <= '9'; s++)
			if (s != f)
			{
				putchar(f);
				putchar(s);

				if (f == '9' && s == '8')
				{
					break;
				}

				else
				{
					putchar(',');
					putchar(' ');
				}

			}
	}

	putchar('\n');

	return (0);
}
