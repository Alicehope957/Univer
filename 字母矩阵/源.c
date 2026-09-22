#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;
    while (~scanf("%d", &t))
    {
        for (int i = 0;i < t;i++)
        {
            for (int j = 0;j < t;j++)
            {
                printf("%c", 'A' + i);
            }
            printf("\n");
        }
        
    }
    return 0;
}