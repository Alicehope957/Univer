#define _CRT_SECURE_NO_WARNINGS
#define MAXLENS 100005
#include <stdio.h>

char s[MAXLENS];
char stack[MAXLENS];

int main(void)
{

	int top = 0;

	if (scanf("%s", s) != 1) 
	{
		return 0;
	}

	for (int i = 0;s[i] != '\0';i++)
	{
		if (top > 0 && stack[top - 1] == s[i])
		{
			top--;
		}
		else
		{
			stack[top] = s[i];
			top++;
		}
	}

	for (int i = 0;i < top;i++)
	{
		printf("%c", stack[i]);
	}

	printf("\n");

	return 0;
}