/*
 ============================================================================
 Name        : hw03.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
    int m, d; // 月　日
    scanf("%d %d", &m, &d);

    if(m < 0 || 12 < m || d < 0 || d > 31) return -1;//不正な入力は終了させる。

    //m,dを31進数の一つの数md(31)として解釈する。また、それぞれのイベントの開始と終了も同じように一つの数として扱う。
    int data = m * 31 + d;
    int vac1 = 1 * 31 + 6;
    int last1 = 2 * 31 + 10;
    int vac2 = 4 * 31 + 6;
    int first = 8 * 31 + 5;
    int vac3 = 9 * 31 + 26;
    int last2 = 12 * 31 + 23;


    printf("2026/%d/%d ", m, d);//共通の出力

    if(data < vac1) {
        printf("is a vacation of the Last semester in KIT.\n");//冬休み年始
    }else if(data <= last1) {//後学期
        printf("is the Last semester in KIT.\n");
    }else if(data <= vac2) {//春休み
        printf("is a vacation of the first semester in KIT.\n");
    }else if(data <= first) {//前学期
        printf("is the First semester in KIT.\n");
    }else if(data <= vac3) {//夏休み
        printf("is a vacation of the first semester in KIT.\n");
    }else if(data <= last2) {//後学期
        printf("is the Last semester in KIT.\n");
    }else {//冬休み年末
        printf("is a vacation of the Last semester in KIT.\n");
    }

    return 0;
}