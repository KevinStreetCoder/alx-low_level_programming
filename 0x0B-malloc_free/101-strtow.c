#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words in
 *
 * Return: The number of words in the string
 */
static int count_words(char *str)
{
	int count = 0;
	char prev = ' ';

	while (*str)
	{
		if (*str == ' ' && prev != ' ')
			count++;
		prev = *str;
		str++;
	}

	if (prev != ' ')
		count++;

	return count;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: An array of strings (words) or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int count, i, j, len;
	char prev = ' ';

	if (str == NULL || *str == '\0')
		return NULL;

	count = count_words(str);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;

	i = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			prev = ' ';
		}
		else
		{
			if (prev == ' ')
			{
				len = 1;
				while (str[len] && str[len] != ' ')
					len++;
				words[i] = malloc((len + 1) * sizeof(char));
				if (words[i] == NULL)
				{
					for (j = 0; j < i; j++)
					free(words[j]);
					free(words);
					return NULL;
				}
				for (j = 0; j < len; j++)
					words[i][j] = str[j];
				words[i][len] = '\0';
				i++;
			}
			prev = *str;
		}
		str++;
	}

	words[count] = NULL;

	return words;
}
