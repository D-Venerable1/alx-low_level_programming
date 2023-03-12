#include "main.h"

/**
 * _strncat - concatenates two strings, but only up to n characters of src
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of characters to concatenate
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest + _strlen(dest);

	while (*src && n--)
		*p++ = *src++;

	*p = '\0';

	return (dest);
}
