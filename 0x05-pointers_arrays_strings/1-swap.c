#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first integer number
 * @b: second integer number
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
