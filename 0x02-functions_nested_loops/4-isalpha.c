#include "main.h"

/**
 * _isalpha - checks alphabetic character
 *
 * @x: ASCII character code
 *
 * Return: 1 for letters and for other types 0
 */
int _isalpha(int x)
{
	if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
