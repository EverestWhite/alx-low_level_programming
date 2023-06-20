#include <stdio.h>
#include "main.h"
/**
 * main - this C program prints out the character _putchar
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char *z = "_putchar";

		while (*z)
		{
			_putchar(*z);
			z++;
		}
		_putchar('\n');

		return (0);
}
