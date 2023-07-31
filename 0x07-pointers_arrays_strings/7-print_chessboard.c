#include "main.h"

/**
 * print_chessboard - prints chessboard when passed an array
 *
 * @array: array of the board with values
 *
 * Return: void
 */

void print_chessboard(char (*array)[8])
{
	int row, col;

	for (row = 0; row < 9; row++)
	{
		for (col = 0; col < 9; col++)
		{
			if (col == 8)
				_putchar(10);
			else
				_putchar(array[row][col]);
		}
	}
}
