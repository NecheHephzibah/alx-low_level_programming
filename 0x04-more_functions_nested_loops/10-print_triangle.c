#include "main.h"

/**
* print_triangle - Entry point, prints triangle using
* #.
* @size: Size of the triangle.
* Return: void.
*/


void print_triangle(int size)
{
	int row, nai, shift;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (shift = size - row; shift >= 1; shift--)
			{
				_putchar(' ');
			}
			for (nai = 1; nai <= row; nai++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
