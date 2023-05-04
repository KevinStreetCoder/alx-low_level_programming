#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be represented in binary
 */
void print_binary(unsigned long int n)
{
	unsigned int flag = 0;
	int i;
	unsigned long int mask = 1;

	for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
	{
		if ((mask << i) & n)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
}
