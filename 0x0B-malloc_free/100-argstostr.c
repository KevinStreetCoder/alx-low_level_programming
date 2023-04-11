#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 *
 * Return: If concatenation fails or the function receives no arguments - NULL
 *         Otherwise - a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
		for (byte = 0; av[arg][byte]; byte++)
			size++;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		str[index++] = '\n';
	}
	str[index] = '\0';

	return (str);
}
