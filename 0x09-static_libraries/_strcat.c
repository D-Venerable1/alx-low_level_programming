#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest + _strlen(dest);

	while ((*p++ = *src++))
		;

	return (dest);
}
