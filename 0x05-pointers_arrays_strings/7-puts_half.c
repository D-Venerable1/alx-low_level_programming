#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	for (i = (len + 1) / 2; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
