#include <stdio.h>

/**
* main - Print alphabets in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char l;

		for (l= 'a'; l <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
