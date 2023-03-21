#include "main.h"
#include <stdio.h>

void times_table(int n)
{
	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}
