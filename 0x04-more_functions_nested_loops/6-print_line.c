#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line of underscores in the terminal.
 *
 * Parameters:
 * n: The number of underscores to print in the line.
 *
 * putchar - Prints a single character to the standard output stream.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
