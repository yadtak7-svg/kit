/*
 ============================================================================
 Name        : hw06.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
*/

#include <stdio.h>

#define MIN_MONEY 30000
#define MAX_MONEY 1000000

const double interest_rate = 0.02125;
const int commission = 1000;

int compound_interest(int money, int year);

int main(void) {
	
    int money;
    int year;
    printf("Type money (%d - %d), year(1-10) and Enter.:", MIN_MONEY, MAX_MONEY);
    scanf("%d %d", &money, &year);

    if(money < MIN_MONEY || money > MAX_MONEY || year < 1 || year > 10) {
        printf("Illegal money or year.\n");
        return (-1);
    }
    
    printf("%d\n", compound_interest(money, year));

	return (0);
}

int compound_interest(int money, int year) {
    for(int i = 0; i < year; i++) {
        double res = (double)money * (1 + interest_rate);
        money = (int)res - commission;
    }
    return money;
}
