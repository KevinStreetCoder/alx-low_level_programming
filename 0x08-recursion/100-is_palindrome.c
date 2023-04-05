#include "main.h"

int check_palindrome(char *s, int start, int end);
int str_len(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: A pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, str_len(s) - 1));
}

/**
 * str_len - Computes the length of a string.
 *
 * @s: A pointer to the string to compute the length of.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 *
 * @s: A pointer to the string to check.
 * @start: The starting index of the string.
 * @end: The ending index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end))
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}
