#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @desn: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *desn, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(desn + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (desn);
}
