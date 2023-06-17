#include <stdio.h>
#include <stdlib.h>

/**
*This program prints the alphabets in lowercase
*main - Entry point
*
*Return: Always 0 (Success)
*/

int main()
{
  char ch;
         for (ch='a'; ch<='z'; ch++)
           {
             putchar("%c\n", ch);
            }
return (0);
}
