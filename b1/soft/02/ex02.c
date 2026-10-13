/*
 ============================================================================
 Name        : ex02.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int x,y,z;
	int add,sub,mul,div,mod;

	printf("Please input two natural numbers and press ENTER KEY.:");
	fflush(stdout);
	scanf(" %d %d", &x, &y);
	printf("x = %d\ty = %d\n\n", x, y);

	add = x + y;
	printf("%d + %d = %d\n", x, y, add);
	sub = x - y;
	printf("%d - %d = %d\n", x, y, sub);
	mul = x * y;
	printf("%d * %d = %d\n", x, y, mul);
	div = x / y;
	printf("%d / %d = %d\n", x, y, div);
	mod = x % y;
	printf("%d %% %d = %d\n", x, y, mod);

	return (0);
}

/*
int main(void)
{
	int x,y,z;
	int add,mul,div,mod;

	printf("Please input two natural numbers and press ENTER KEY.:");
	fflush(stdout);
	scanf(" %d %d", x, y);
	printf("x = %d\ty = %d\n\n", x, y)

	add = x + y;
	printf("%d + %d = %d\n", x, add);
	sub = x - y;
	printf("%d - %d = %d\n", x, y, sub);
	mul = x * y;
	printf("%d * %d = %d\n", x, y, mul);
	div = x / y;
	printf("%d / %d = %d\n", x, y, div);
	mod = x % y;
	printf("%f %% %f = %f\n", x, y, mod);

	return (0);
}
    
#include <stdio.h>;　を
#include <stdio.h>　に変更した。
変更内容: ';'を削除した。

int x,y,z;　を
int x,y; に変更した。
変更内容　使わない変数zの宣言を削除した。

int add,mul,div,mod; を
int add,sub,mul,div,mod;　に変更した。
変更内容　後の処理で用いられる変数subを宣言した。

scanf(" %d %d", x, y);　を
scanf(" %d %d", &x, &y);　に変更した。
変更内容　x,yにアドレス演算子を追加した。

printf("x = %d\ty = %d\n\n", x, y)　を
printf("x = %d\ty = %d\n\n", x, y);　に変更した。
変更内容　;を追加した。

printf("%d + %d = %d\n", x, add);　を
printf("%d + %d = %d\n", x, y, add);　に変更した。
変更内容 引数x,addの間にyを追加した、

printf("%f %% %f = %f\n", x, y, mod); を
printf("%d %% %d = %d\n", x, y, mod);　に変更した。
変更内容　引数の書式設定を%fから%dに変更した。

　
*/
