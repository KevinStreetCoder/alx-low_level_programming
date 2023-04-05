#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered identical
 * @s1: first string to compare
 * @s2: second string to compare, can contain the special character *
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		// If both strings are empty, they are identical
		return (1);
	}
	else if (*s2 == '*')
	{
			// If s2 starts with a *, recursively compare s1 and s2 without the *
			if (*s1 == '\0') { // If s1 is empty and s2 starts with *, recursively compare s1 and s2+1
			return (wildcmp(s1, s2+1));
		}
		else
		{
			// Otherwise, try matching s1 with the rest of s2, or advancing s1
			return (wildcmp(s1, s2+1) || wildcmp(s1+1, s2));
		}
	}
	else if (*s1 == *s2)
	{
		// If the characters match, compare the rest of the strings
		return (wildcmp(s1+1, s2+1));
	}
	else
	{
		// Otherwise, the strings are not identical
		return (0);
	}
}
