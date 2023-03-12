#include "main.h"

/**
 * _strcpy - copies a string to a destination buffer
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while ((*p++ = *src++))
		;

	return (dest);
}
