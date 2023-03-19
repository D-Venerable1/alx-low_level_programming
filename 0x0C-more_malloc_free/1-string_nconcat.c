#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The maximum number of bytes from s2 to be concatenated.
 *
 * Return: A pointer to the concatenated string, or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	new_str = malloc((s1_len + n + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	strncpy(new_str, s1, s1_len);
	strncpy(new_str + s1_len, s2, n);
	new_str[s1_len + n] = '\0';

	return (new_str);
}
