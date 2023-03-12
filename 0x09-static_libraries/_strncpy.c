#include "main.h"

/**
 * _strncpy - copies a string to a destination buffer, but only up to n
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (*src && n--)
		*p++ = *src++;

	if (n > 0)
		*p = '\0';

	return (dest);
}
