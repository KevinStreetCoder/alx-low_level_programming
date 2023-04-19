#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: number of command line arguments
 * @argv: array of command line argument strings
 * Return: 0 on success, 1 if incorrect number
 * of arguments, or 2 if negative
 * number of bytes requested
*/
int main(int argc, char *argv[])
{
	char *addr;
	int i, size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (char *)main;
	for (i = 0; i < size; i++)
	{
		printf("%02hhx", addr[i]);
		if (i == size - 1)
		printf("\n");
		else
		printf(" ");
	}
	return (0);
}