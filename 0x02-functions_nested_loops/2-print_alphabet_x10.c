#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase 10 times followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
