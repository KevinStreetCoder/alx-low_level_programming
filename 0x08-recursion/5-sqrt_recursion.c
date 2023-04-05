#include "main.h"

/**
 * _sqrt - calculate square root of a number recursively
 * @n: the number to calculate the square root of
 * @i: the current integer to check
 *
 * Return: the square root of n or -1
 * if n doesn't have a natural square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculate square root
 * of a number using recursion
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n or -1
 * if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}

