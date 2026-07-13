#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {

    int n;
    printf("input n : ");
    scanf("%d", &n);

    int sqr = square(n);
    printf("n * n = %d\n", sqr);

    return 0;
}