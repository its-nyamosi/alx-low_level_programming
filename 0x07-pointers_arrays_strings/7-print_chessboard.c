#include "main.h"
/**
 * print_chessboard - Entry point
 * @z: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*z)[8])
{
	int a;
	int b;

	for (a = 0; a < 8; a++)
	{
		for (b = 0; b < 8; b++)
			_putchar(z[a][b]);
		_putchar('\n');
	}
}
