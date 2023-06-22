#include "main.h"

/**
 * more_numbers - prints 0-14 ten tiimes
 * 
 * Return: 0-14 ten tiimeme
 */
void more_numbers(void)
{
	int x,  y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
			
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
