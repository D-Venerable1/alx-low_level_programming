#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr_dest = dest;
	char *ptr_src = src;

	for (i = 0; i < n; i++)
		*(ptr_dest + i) = *(ptr_src + i);

	return (dest);
}
