#include <stdio.h>
#include <stdlib.h>

/**
* main - prints lowercase alphabets
* in reverse
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	putchar(alpha);
/**
 * measures the values of the
 * characters from highest to lowest and prints
 */
	putchar('\n');

	return (0);
}
