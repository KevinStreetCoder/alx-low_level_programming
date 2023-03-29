/**
 * leet - encodes a string into 1337.
 *
 * @s: string to encode.
 *
 * Return: pointer to encoded string.
 */
char *leet(char *s)
{
	char *ptr = s;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	while (*ptr != '\0')
	{
		i = 0;
		j = 0;

		while (letter[i] != '\0')
		{
			if (*ptr == letter[i])
			{
				*ptr = number[j];
				break;
			}
			i++;
			j++;
		}
		ptr++;
	}

	return (s);
}
