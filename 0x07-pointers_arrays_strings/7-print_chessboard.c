#include "main.h"

/**
 * print_chessboard -body
 * Function that prints the chessboard
 * @a: the 2d array we print
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;

	while (x <= 7)
	{
		y = 0;

		if (y <= 7)
		{
			_putchar(a[x][y]);
			y++;
		}

		_putchar('\n');
		x++;
	}
}
