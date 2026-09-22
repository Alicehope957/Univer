#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score = 0;
	printf("请输入你的考试成绩\n");
	scanf("%d", &score);

	printf("你的考试成绩为%d\n", score);
	
	if (score >= 60)
	{
		printf("恭喜,你及格了！\n");
	}
	else
	{
		printf("你的考试成绩不及格！\n");
	}
	printf("再见！\n");
	return 0;

}