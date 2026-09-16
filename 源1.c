#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int price2 = 0;
	int price1 = 0;
	int price = 0;
	printf("请输入金额(元):");
	scanf("%d %d", &price1,&price2);
	if (price1 < price2) {
		price = price1;
	}
	else{
		price = price2;
		

	}

	int change = 100 - price;

	printf("找您%d元。\n", change);
	return 0;
}