#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to bt src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *strcpy(char *dest, char *src)
{
	int 1 = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
