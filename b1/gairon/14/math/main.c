#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c; /* a, b, c の値を格納する変数 */
    double z; /* 計算過程の値を一時的に保存するための変数 */
    double x1, x2; /* 二次方程式の解 */

    printf("input a b c: ");
    scanf("%lf %lf %lf", &a, &b, &c); /* 標準入力から a, b, c の値を受け取る */

    if(a == 0) { /* もし a の値が 0 だったら */
        printf("a must not be zero.\n"); /* メッセージを表示して */
        return 0; /* プログラムを終了 */
    }

    z = b * b - 4 * a * c; /* 解の公式の平方根の中身の値を求めて変数 z に代入 */
    if(z < 0) { /* もし z が 0 未満だったら，解は無いので「No answer.」と表示 */
        printf("No real solution.\n");
    }

    else if(z == 0) { /*もし z = 0だったら方程式は重解をもち、解は一つしかない*/
        x1 = -b / (2 * a);
        printf("x = %f\n",x1); /*解*/
    }

    else { /* もし z が 0 未満でなかったら，解を求めて表示 */
        x1 = (-b + sqrt(z)) / (2 * a); /* 1つ目の解 */
        x2 = (-b - sqrt(z)) / (2 * a); /* 2つ目の解 */
        printf("x = %f, %f\n", x1, x2); /* それぞれの解を表示 */
    }
    return 0;
}