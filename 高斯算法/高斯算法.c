#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	scanf("%d", &i);
	while (i--)
	{
		scanf("%d", &n);
		if (n == 0)
		{
			printf("1\n");
			continue;
		}

		printf("5");

		for (int j = 1;j < n;j++)
		{
			printf("0");
		}

		printf("5");

		for (int k = 1;k < n;k++)
		{
			printf("0");
		}
		printf("\n");
	}
	return 0;
}