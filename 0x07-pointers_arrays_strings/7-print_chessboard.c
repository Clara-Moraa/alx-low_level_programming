#include "main.h"

/**
 * print_chessboard - prints a chess board
 *
 * @a: pointer for chessboard printing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int x, y = 0;

	for (x = 0; x < 64; x++)
	{
		if (x % 8 == 0 && x != 0)
		{
			y = x;
			_putchar('\n');
		}
		_putchar(a[x / 8][x - y]);
	}
	_putchar('\n');
}
