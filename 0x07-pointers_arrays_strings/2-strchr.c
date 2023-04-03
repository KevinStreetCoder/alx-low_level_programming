#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*haystack == *n && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (h);
		haystack = h + 1;
	}
	return (NULL);
}
