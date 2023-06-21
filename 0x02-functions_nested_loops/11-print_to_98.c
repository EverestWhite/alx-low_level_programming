#include <stdio.h>

/**
 * print_to_98 - prints natural numbers btw 0-98
 *
 * @x: the input
 *
 * Return: the natural numbers
 */
void print_to_98(int x)
{
	if (x > 98)
	{
		for (; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	else if (x < 98)
	{
		for (; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	printf("%d\n", x);
}
