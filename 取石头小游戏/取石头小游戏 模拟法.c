#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    while (N--) {
        int K, P;
        scanf("%d %d", &K, &P);

        int winner = 0;
        for (int i = 1; i <= K; i++) {
            winner++;
            if (winner > P) {
                winner = 1;
            }
        }
        printf("%d\n", winner);
    }

    return 0;
}