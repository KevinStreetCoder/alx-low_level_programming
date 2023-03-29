#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be concatenated upon.
 * @src: The string to be concatenated to dest.
 * Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int index_dest = 0, index_src = 0;

	while (dest[index_dest] != '\0')
		index_dest++;

	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}

	dest[index_dest] = '\0';

	return (dest);
}
