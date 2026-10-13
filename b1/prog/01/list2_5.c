//型
#include <stdio.h>
int main(void)
{
    int a, b;
    puts("二つの整数を入力:");
    printf("整数a:"); scanf("%d",&a);
    printf("整数b:"); scanf("%d",&b);
    printf("平均は%d\n", (a+b)/2);
    return 0;
}