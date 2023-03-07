#include "main.h"

/**
 * print_chessboard -body
 * Function that prints the chessboard
 * @a: the 2d array we print
 */

void print_chessboard(char (*a)[8])
{
	int x, y;


	for (x = 0; x <= 7; x++)
	{
		y = 0;

		if (y <= 7)
		{
			_putchar(a[x][y]);
			y++;
		}

		_putchar('\n');
	}
}
