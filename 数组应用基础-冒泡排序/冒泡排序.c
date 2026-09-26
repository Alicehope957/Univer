#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        int a[105];
        for (int i = 0;i < n;i++)
        {
            scanf("%d",&a[i]);
        }

        for (int i = 0;i < n - 1;i++)
        {
            for (int j = 0;j < n - 1 - i;j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp;
                    temp = a[j + 1];
                    a[j + 1] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (int q = 0;q < n;q++)
        {
            if (q != n - 1)
            {
                printf("%d ", a[q]);
            }
            else
            {
                printf("%d", a[q]);
            }
        }
        printf("\n");
    }
    return 0;
}