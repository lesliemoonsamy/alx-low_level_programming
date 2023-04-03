#include "main.h"
/**
 *_memcpy - a function that copies memory of area
 *@dest: memory is stored
 *@src: memory is copied
 *@n: number of bytes
 *
 * Return: copied memory with n byte chnaged
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i, r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
