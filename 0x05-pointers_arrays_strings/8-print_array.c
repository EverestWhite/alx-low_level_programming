#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an
 * array of integers, followed by a new line.
 * @x: input array
 * @y: input elements
 */
void print_array(int *x, int y)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(x + i));
		if (i != (y - 1))
			printf(", ");
	}
	printf("\n");
}
