#include <stdio.h>
#include <stdlib.h>

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: pointer to the product of num1 and num2
 */
char *mul(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), i, j;
	char *res = calloc(len1 + len2 + 1, sizeof(char));

	if (!res)
		return (NULL);

	for (i = len1 - 1; i >= 0; i--)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			free(res);
			return (NULL);
		}
		for (j = len2 - 1; j >= 0; j--)
		{
			if (num2[j] < '0' || num2[j] > '9')
			{
				free(res);
				return (NULL);
			}
			res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			res[i + j] += res[i + j + 1] / 10;
			res[i + j + 1] %= 10;
		}
	}

	while (*res == '0' && *(res + 1))
	res++;

	return (res);
}

int main(int argc, char **argv)
{
	char *product;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	product = mul(argv[1], argv[2]);

	if (!product)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%s\n", product);

	free(product);

	return (0);
}