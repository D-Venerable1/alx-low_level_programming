#include "main.h"

/**
 * _puts - prints a string to stdout followed by a new line
 *
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
