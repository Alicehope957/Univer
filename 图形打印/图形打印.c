#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t;
	int first = 1;

	while (~scanf("%d", &t))
		{

		if (!first)
		{
			printf("\n");
		}

		for (int i = 0;i < t;i++)
		{
			printf("*");
		}
		printf("\n");

		first = 0;
	}
	
	return 0;
}