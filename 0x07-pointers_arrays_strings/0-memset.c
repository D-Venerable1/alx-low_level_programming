#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to the memory area to fill
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
		*(ptr + i) = b;

	return (s);
}
