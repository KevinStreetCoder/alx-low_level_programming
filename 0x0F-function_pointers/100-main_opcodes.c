#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed to program
 * @argv: array of pointers to arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", opcodes[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}