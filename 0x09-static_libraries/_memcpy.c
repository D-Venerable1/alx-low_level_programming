#include "main.h"

/**
 * _memcpy - copies memory from one buffer to another
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
		*p++ = *src++;

	return (dest);
}
