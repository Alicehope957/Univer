#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, count=0;
	scanf("%d", &a);
	if (a == 0)
	{
		printf("1\n");
	}
	else {
		while (a > 0)
		{
			a /= 10;
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}