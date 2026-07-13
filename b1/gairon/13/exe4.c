#include <stdio.h>

int multiply(int x, int y) {
    return x * y;
}

int main() {

    int x, y;
    int mul;

    printf("input x y : ");
    scanf("%d %d",&x, &y);

    mul = multiply(x, y);
    printf("x + y = %d\n", mul);

    return 0;
}