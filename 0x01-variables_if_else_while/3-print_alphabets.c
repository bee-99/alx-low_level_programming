#include <stdio.h>

/**
 * main - printing low and high level alphabets using putchar function
 * Return: 0 Success
 */

int main(void)
{

	char A;
	char a;

		for (A = 'a'; A <= 'z'; A++)
		putchar(A);

		for (a = 'A'; a <= 'Z'; a++)
		putchar(a);

		putchar ('\n');

	return (0);
}

