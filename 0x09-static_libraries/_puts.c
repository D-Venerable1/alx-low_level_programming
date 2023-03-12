#include "main.h"

/**
 * _puts - writes a string to standard output
 * @s: the string to write
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
