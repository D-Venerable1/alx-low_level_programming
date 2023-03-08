#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical, 0 otherwise
 *
 * @s1: first input string
 * @s2: second input string (can contain the special character *)
 *
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || *s2 == '*')
			return (1);
		return (0);
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
