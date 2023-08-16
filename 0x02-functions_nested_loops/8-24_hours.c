#include "main.h"

/**
 * jack_bauer - prints time using loops
 *
 * Return: void
 */

void jack_bauer(void)
{
	int s;
	int t;
	int u;

	for (s = 48; s <= 50; s++)
		{
			_putchar(s);

			for (t = 48; t <= 51; t++)
				_putchar(t);

			{
				_putchar(t);
				_putchar(':');

				for (u = 48; u <= 53; u++)
				{
					_putchar(u);
					_putchar(':');
				}
			}
		}
}
