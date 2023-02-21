#include "main.h"

/**
 * jack_bauer - body
 *
 * a function that prints every minute of the day
 * x, y: arguments
 * Return: void
 */

void jack_bauer(void)
{
	int x = '00:00';
	int y;

	while (x <= '23:59')
		{
		y = '0';
		while (y <= '60')
			_putchar('0' + y);
			y++;
		}
	x++;

}
