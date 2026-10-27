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
#include <string.h>
int main(void)
{

    char semesterstr[][20]={"a vacation", "the First semester", "the Last semester"};
    /*
    char monthname[][10] = {
    "-",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
    };
    */


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
    char vac[20];
    char sem[20]; 

    if(data < vac1 || (last1 < data && data <= vac2) || (first < data && data <= vac3) || (last2 < data)) {
        strcpy(vac, semesterstr[0]);
    }
    if(last1 < data && data <= first) {
        strcpy(sem, semesterstr[1]);
    }else {
        strcpy(sem, semesterstr[2]);
    }


    printf("is %s %s in KIT.\n",vac ,sem);

    return 0;
}