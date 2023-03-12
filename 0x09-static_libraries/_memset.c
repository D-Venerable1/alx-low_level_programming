#include "main.h"

/**
 * _memset - fills a memory area with a constant byte
 * @s: the memory area to fill
 * @b: the value to fill the memory area with
 * @n: the number of bytes to fill
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*p++ = b;

	return (s);
}
