#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    while (n--) {
        int K, P;
        scanf("%d %d", &K, &P);
        printf("%d\n", (K - 1) % P + 1);
    }

    return 0;
}