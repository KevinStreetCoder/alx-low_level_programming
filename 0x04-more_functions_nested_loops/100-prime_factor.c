#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
    long int n = 612852475143;
    long int factor = 2;
    long int largest_factor;

    while (n != 0)
    {
        if (n % factor != 0)
            factor++;
        else
        {
            largest_factor = n;
            n /= factor;
            if (n == 1)
            {
                printf("%ld\n", largest_factor);
                break;
            }
        }
    }
    return (0);
}
