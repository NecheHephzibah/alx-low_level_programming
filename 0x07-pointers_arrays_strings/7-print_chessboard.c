#include "main.h"

/**
* print_chessboard - Entry point
* @a: array
* Return: 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
	int mib;
	int bim;

	for (mib = 0; mib < 8; mib++)
	{
		for (bim = 0; bim < 8; bim++)
		{
			_putchar(a[mib][bim]);
		}
		_putchar('\n');
	}
}
