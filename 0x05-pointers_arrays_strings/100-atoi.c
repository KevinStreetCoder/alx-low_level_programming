#include "main.h"

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
			result = (result * 10) + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
			{
				break;
			}
		}
		i++;
	}
	return (result * sign);
}
