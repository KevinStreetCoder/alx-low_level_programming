#include "main.h"

/**

_strncat - Concatenates two strings, using at most n bytes from src.

@dest: The string to be concatenated upon.

@src: The string to be concatenated to dest.

@n: The maximum number of bytes to be used from src.

Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int index_dest = 0, index_src = 0;

	while (dest[index_dest] != '\0')
		index_dest++;

	while (index_src < n && src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_dest++;
		index_src++;
	}

	dest[index_dest] = '\0';

	return (dest);
}