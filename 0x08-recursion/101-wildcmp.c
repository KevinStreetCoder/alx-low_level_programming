#include "main.h"

/**
 * wildcmp - Compares two strings, where the second string may contain wildcard
 * characters ('*').
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare, which may contain wildcard characters.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Both strings are empty */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* Characters match */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Wildcard character encountered */
	if (*s2 == '*')
	{
		/* Check for consecutive wildcard characters */
		if (*(s2 + 1) != '\0' && *s1 == '\0')
			return (0);

		/* Recurse with s2+1 and s1, or s2 and s1+1 */
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}

	/* No match found */
	return (0);
}
