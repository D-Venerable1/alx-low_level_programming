#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success
 */
int _putchar(char C)
{
	return (write(1, &c, 1));
}
