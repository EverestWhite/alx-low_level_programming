#include <stdio.h>
#include "main.h"
/**
*main - prints lower case alphabets
*
*Return: Always 0 (Successful)
*/

void print_alphabet(void)
{
        int i;

                for (i = 97; i <= 122; i++)
                {
                        _putchar(i);
                }
                _putchar('\n');

