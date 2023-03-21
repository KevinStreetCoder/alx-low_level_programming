#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	/* If c is between 'a' and 'z' or between 'A' and 'Z' in ASCII table, return 1 */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	/* Otherwise, return 0 */
	else
		return (0);
}
