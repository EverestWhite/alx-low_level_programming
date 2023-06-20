#include "main.h"

/**
 * _islower - checks if the alphabet is lower case
 *
 * Return: Always 0 (Success)
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
