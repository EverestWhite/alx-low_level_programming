#include "main.h"

/**
 * _isdigit -this fxn checks if character is a digit 0-9
 * @x: input
 * Return: 1 if the character  is a digit, 0 otherwise
 */
int _isdigit(int x)
{
	if ((x >= 48) && (x <= 57))
		return (1);
	else
		return (0);
}
