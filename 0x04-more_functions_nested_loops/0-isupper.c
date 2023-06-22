#include "main.h"

/**
 * _isupper - checks if the alphabet  is an uppercase character.
 * @x: input letter
 * Return: 1 if the alphabet is an uppercase character, 0 in other case.
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
