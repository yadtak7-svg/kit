/*
 ============================================================================
 Name        : hw04.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    long long a;

    printf("Enter a natural number less than or equal to 9: ");
    fflush(stdout);

    scanf("%lld", &a);

    if ((a <= 0) || (a > 9)) {
        printf("Input error.\n");
        return (-1);
    }

    // i = 1,2...aについてi^iを表示する。
    for(int i = 1; i <= a; i++) {
        long long res = 1;
        for(int j = 1; j <= i; j++) {
            res *= (long long)i;
        }
        printf("%d^%d = %lld\n", i, i, res);
    }

    return (0);
}
