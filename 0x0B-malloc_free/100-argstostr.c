#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 *
 * Return: If concatenation fails or the function receives no arguments - NULL
 * Otherwise - a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	char *p = NULL;
	int k;
	int ext;

	k = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ext++;
		}
	}

	p = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	p[k] = '\0';
	return (p);
}
