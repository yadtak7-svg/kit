#include <stdio.h>
#include "clock.h"

/* 時計の表示を行う関数 */
void draw(void)
{
    int y, mth, d, h, m, s; /* 現在の年, 月, 日, 時，分，秒の値を格納する変数 */
    y = get_year();/* 現在時刻の「年」を取得して，変数 y に代入 */
    mth = get_month();/* 現在時刻の「月」を取得して，変数 mth に代入 */
    d = get_day();/* 現在時刻の「日」を取得して，変数 d に代入 */
    h = get_hours(); /* 現在時刻の「時」を取得して，変数 h に代入 */
    m = get_minutes(); /* 現在時刻の「分」を取得して，変数 m に代入 */
    s = get_seconds(); /* 現在時刻の「秒」を取得して，変数 s に代入 */
    printf("%d/%02d/%02d %02d:%02d:%02d\n",y, mth, d, h, m, s); /* 現在時刻を標準出力に表示 */
    fflush(stdout); /* 標準出力の表示を強制的に更新 */
}
int main(void)
{
    start(draw, 1); /* 1秒おきに draw 関数を呼び出す */
    return 0;
}