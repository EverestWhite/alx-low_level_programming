#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabets 10x
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
			for (y = 97; y <= 122; y++)
			{
				_putchar(y);
			}
		_putchar('\n');
	}
}
