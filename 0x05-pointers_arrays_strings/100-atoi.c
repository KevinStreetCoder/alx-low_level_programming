#include "main.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';
			if (result > (INT_MAX - digit) / 10)
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = (result * 10) + digit;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
		i++;
	}
	return (result * sign);
}
