#include "main.h"

/**
 * print_sign - Determines if a number is  greater, 
 * equal or less than zero.
 *
 *@: the input number

 * Return: 1 when greater than zero. 0 when zero.
 * -1 when less than 0
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (x < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

