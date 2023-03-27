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

    if (s[0] == '-') {
        sign = -1;
        i++;
    }

    while (s[i]) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit > 8)) {
                // overflow!
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            result = result * 10 - digit;
        } else {
            break;
        }
        i++;
    }

    return sign * result;
}
