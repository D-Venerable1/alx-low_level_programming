#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p1 = haystack;
		char *p2 = needle;

		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}

		if (!*p2)
			return (haystack);

		return (haystack);
	}

	return (NULL);
}
