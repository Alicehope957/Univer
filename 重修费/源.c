#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int t;

    while (~scanf("%d", &t))
    {
        int fail_count = 0;
        for (int i = 0;i < t;i++)
        {
            int a;
            scanf("%d", &a);
            if (a < 60)
            {
                fail_count++;
            }

        }
        printf("%d\n", fail_count * 200);
    }
    return 0;
}