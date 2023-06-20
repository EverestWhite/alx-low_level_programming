#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lower case alphabets 20x
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, z;

	for (i = 0; i <= 9; i++)
		{
			for (z = 97; z <= 122; z++)
			{
				_putchar(z);
			}
		_putchar('\n');
		}
	return (0);
}
