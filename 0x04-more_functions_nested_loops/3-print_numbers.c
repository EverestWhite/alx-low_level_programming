#include "main.h"

/**
*print_numbers - function which prints numbers from 0-9
*
*Return: numbers 0-9 and a new line
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar(x + '0');
	_putchar('\n');
}
