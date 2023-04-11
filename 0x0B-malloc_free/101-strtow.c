#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in str
 */
int count_words(char *str)
	{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to array of words, or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
		{
			len++;
		}

		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}

		for (k = 0; k < len; k++)
		{
			words[j][k] = str[i + k];
		}
		words[j][len] = '\0';
		i += len;
	}

	words[word_count] = NULL;
	return (words);
}
