#include "main.h"

/**
 * _abs - determines the absolute value of integer
 *
 * @n: integer number
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
