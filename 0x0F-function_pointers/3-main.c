#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = op(a, b);
	if (result == 100)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", result);
	return (0);
}
