#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints two numbers seperated by comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 0;

	while (z < 10)
	{
		putchar(48 + z);
		if (z != 9)
		{
			putchar(',');
			putchar(' ');
		}
		z++;

	}
	putchar('\n');
	return (0);
}
