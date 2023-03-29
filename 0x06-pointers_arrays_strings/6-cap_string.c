#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,.!\"(){};";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i - 1] == sep[0]
		|| s[i - 1] == sep[1] || s[i - 1] == sep[2]
		|| s[i - 1] == sep[3] || s[i - 1] == sep[4]
		|| s[i - 1] == sep[5] || s[i - 1] == sep[6]
		|| s[i - 1] == sep[7] || s[i - 1] == sep[8]
		|| s[i - 1] == sep[9] || s[i - 1] == sep[10])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		}
	}

	return (s);
}
