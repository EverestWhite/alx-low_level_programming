#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  a program that generates random valid passwords
 * Return: 0 Always (Success)
 */
int main(void)
{
	int a = 0, b = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (b < 2772)
	{
		a = rand() % 128;
		if ((b + a) > 2772)
			break;
		b = b + a;
		printf("%c", a);
	}
	printf("%c\n", (2772 - b));
	return (0);
}
