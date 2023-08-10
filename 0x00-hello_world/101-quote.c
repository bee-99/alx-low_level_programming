#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program that prints using write function
 * Return: 1 (Success)
 */

int main(void)
{
	char w[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, w, strlen(w));


	return (1);
}
