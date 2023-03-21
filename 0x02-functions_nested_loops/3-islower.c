#include "main.h"

/**
 * int _islower - checks for lowercase character
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	/* If c is between 'a' and 'z' in ASCII table, return 1 */
	if (c >= 'a' && c <= 'z')
		return (1);
	/* Otherwise, return 0 */
	else
		return (0);
}
