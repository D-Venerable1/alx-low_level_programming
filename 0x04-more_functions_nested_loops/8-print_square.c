#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of size n using the # character
 *
 * Parameters:
 * @size: the size of the square to print
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
