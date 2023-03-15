#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - counts the number of words in a string
 * @str: string to count words in
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to array of words, or NULL if failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, wordcount = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordcount = count_words(str);
	if (wordcount == 0)
		return (NULL);

	words = malloc((wordcount + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (i < wordcount)
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			words[i][k] = *str++;
		words[i][k] = '\0';
		i++;
	}
	words[i] = NULL;

	return (words);
}
