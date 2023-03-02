#include "main.h"

/**
 * print_number - print an integer
 *
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int power = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / power >= 10)
	{
		power *= 10;
	}

	while (power > 0)
	{
		_putchar((n / power) % 10 + '0');
		power /= 10;
	}
}
