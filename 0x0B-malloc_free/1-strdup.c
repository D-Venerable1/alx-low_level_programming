#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string or NULL on failure
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		 dup[i] = str[i];

	return (dup);
}
