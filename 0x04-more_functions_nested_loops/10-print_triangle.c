#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle made of '#' characters
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
