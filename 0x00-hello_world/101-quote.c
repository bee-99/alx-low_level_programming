#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program that prints using write function
 * return: 1 (Success)
 */

int main (void)
{
	const char without[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, without, strlen(without));

	return (1);
}
