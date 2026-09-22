#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    while ((ch = getchar()) != '\n')
    {
        ch = toupper(ch);
        putchar(ch);
    }
    return 0;
}