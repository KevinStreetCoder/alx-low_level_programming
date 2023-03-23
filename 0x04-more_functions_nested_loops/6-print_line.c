#include "main.h"

/**
 * print_line - Prints a straight line of underscores
 *
 * @n: Number of times to print '_'
 *
 * Return: void
 */

void print_line(int n)
{
    int i;

    if (n <= 0)
        _putchar('\n');

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
