#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: The capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		/* If first letter of word is lowercase */
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			/* Capitalize it */
			s[i] -= 32;
		}
		/* Check for separator characters */
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
		s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			/* Check if next letter is lowercase */
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				/* Capitalize it */
				s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
