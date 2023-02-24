#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of length n using the \ character
 *
 * Parameters:
 * @n: the length of the diagonal line to print
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (j == i)
			{
				putchar('\\');
				putchar('\n');
			}
			else
			{
				 putchar(' ');
			}
		}
	}
}
