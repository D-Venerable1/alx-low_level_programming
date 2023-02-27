#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 *
 * @s: Pointer to the string to be converted
 *
 * Return: The integer value of the string, or 0 if there are no
 *  numbers in the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			if (s[i] == '-')
				sign *= -1;

			if (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');

				if (s[i + 1] < '0' || s[i + 1] > '9')
					break;
			}

			i++;
		}
	}
	return (sign * num);
}
