#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int a;
    while (~scanf("%d",&a))
    {
        if ((a % 5) == 0 && (a % 7) == 0)
        {
            printf("Battle\n");
        }
        else if ((a % 5) == 0 && (a % 7) != 0)
        {
            printf("Dog\n");
        }
        else if ((a % 5) != 0 && (a % 7) == 0)
        {
            printf("Pig\n");
        }
        else
        {
            printf("None\n");
        }
    }
    return 0;
}