#include "main.h"

/**
 * print_diagonal - function for drawing a diagonal line on the terminal
 * @n: number of times '\' should be printed
 * Return: diagonal
 */
void print_diagonal(int n)
{
	int col, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 1; col <= n; col++)
		{
			for (space = 1; space < col; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
