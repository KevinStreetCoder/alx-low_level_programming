#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char password[63];
	int i, sum, diff;

	srand(time(NULL));

	for (i = 0, sum = 0; sum < 2772 - 122; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	diff = sum - 2772 + 122;
	password[i++] = diff;

	for (sum = 0; i < 63; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	diff = (sum - diff) % 94 + 33;
	password[i - 1] = diff;

	printf("%s\n", password);

	return (0);
}
