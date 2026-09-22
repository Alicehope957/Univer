#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	while (~scanf("%d", &n))
	{
		int count = 0;
		int num=3;
		while(1)
		{
			if(num%3==0 || num%5 ==0)
			{
				count++;
				if (count == n)
				{
					printf("%d\n", num);
					break;
				}
			}
			num++;
		}
	}
	return 0;
}