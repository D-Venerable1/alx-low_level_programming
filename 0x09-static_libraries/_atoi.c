#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s)
	{
		if (*s < '0' || *s > '9')
			break;


		n = n * 10 + (*s - '0');
		s++;
	}

	return (sign * n);
}
