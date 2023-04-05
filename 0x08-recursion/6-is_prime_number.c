#include "main.h"

/**
 * is_prime - helper function to determine if n is prime
 * @n: the number to check for primality
 * @i: the divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i == n - 1)
		return (1);
	else
		return (is_prime(n, i + 1));
	}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (is_prime(n, 2));
}
