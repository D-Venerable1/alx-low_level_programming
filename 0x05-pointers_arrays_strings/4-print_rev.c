#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: pointer to the string to print in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;

	if (s)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
		s--;
		while (length > 0)
		{
			_putchar(*s);
			s--;
			length--;
		}
	}
	_putchar('\n');
}
