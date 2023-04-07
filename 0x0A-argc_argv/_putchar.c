#include <unistd.h>

/**
 * Writes a single character to the standard output.
 *
 * @param c The character to print.
 * @return  On success, returns 1. On error, returns -1 and sets errno appropriately.
 */
int my_putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}
