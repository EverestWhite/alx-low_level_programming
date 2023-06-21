#include "main.h"

/**
 * _islower - checks if the alphabet is lower case
 *
 * Return: 1 for lowercase and 0 for other types
 *
 * @x: ASCII character
 */
int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
