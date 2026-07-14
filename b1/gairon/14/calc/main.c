#include "calc.h"
#define INT_MAX 2147483647 

int plus(int x, int y) { /* 2つの数 x と y の足し算を行う関数 */
    return x + y;
}

int diff(int x, int y) { /* 2つの数 x と y の引き算を行う関数 */
    return x - y;
}

int multiple(int x, int y) { /* 2つの数 x と y の掛け算を行う関数 */
    return x * y;
}

int divide(int x, int y) { /* 2つの数 x と y の割り算を行う関数 */
    if(y == 0) return CALCULATION_ERROR; /* 0 で割ることはできないので，y が 0 の場合はエラーを返す */
    else return x / y;
}

int mod(int x, int y) { /* 2つの数 x と y の剰余を求める関数 */
    if(y == 0) return CALCULATION_ERROR; /* x mod 0 は定義できないので，y が 0 の場合はエラーを返す */
    else return x % y;
}

int main(void) {

    add_operator("+", 1, plus);     /* 足し算の演算子(+)を登録する */
    add_operator("-", 1, diff);     /* 引き算の演算子(-)を登録する */
    add_operator("*", 3, multiple); /* 掛け算の演算子(*)を登録する */
    add_operator("/", 3, divide);   /* 割り算の演算子(/)を登録する */
    add_operator("%%", 3, mod);      /* 剰余の演算子(%)を登録する */
    calculate();
    return 0;
}