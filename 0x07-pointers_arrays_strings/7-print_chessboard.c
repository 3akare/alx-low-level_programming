#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: an array of character pointers
 *
 * Return: Always successfully
 */

void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 7; j++)
			_putchar(a[i][j]);
		_putchar(10);
	}
}
