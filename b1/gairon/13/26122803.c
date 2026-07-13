#include <stdio.h>

// 引数x, yの和を返す関数
int addition(int x, int y) {
    return x + y;
}
// 引数x, yの差を返す関数
int difference(int x, int y) {
    return x - y;
}
// 引数x, yの積を返す関数
int multiply(int x, int y) {
    return x * y;
}
// 引数x, yの商を返す関数
int divide(int x, int y) {
    return x / y;
}
// 引数x, yの剰余を返す関数
int mod(int x, int y) {
    return x % y;
}

//　入力された整数 x, yについてxとyの和,差,積,商,剰余を出力する
int main(void) {
    
    int x, y;

    //入力
    printf("input x y: ");
    scanf("%d %d", &x, &y);

    //和を表示
    printf("x + y = %d\n", addition(x, y));

    //差を表示
    printf("x - y = %d\n", difference(x, y));

    //積を表示
    printf("x * y = %d\n", multiply(x, y));

    //商を表示(y = 0のときは無視)
    if(y != 0) 
    printf("x / y = %d\n", divide(x, y));

    //剰余を表示(y = 0のときは無視)
    if(y != 0)
    printf("x %% y = %d\n", mod(x, y));

    return 0;
}