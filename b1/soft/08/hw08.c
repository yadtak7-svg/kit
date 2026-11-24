/*
 ============================================================================
 Name        : hw07.c
 Author      : Takeru Yadani b26122803
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void get_BMIs( int height, int weight, double *r_bmi, double *r_std_weight);

int main() {
    
    int height, weight;
    double r_bmi, r_std_weight;

    printf("Enter the your height and your weight (both 1-199):" );
    fflush(stdout);
	if (scanf("%d %d", &height, &weight)!=2 || weight<1 || weight>199 || height<1 || height>199 ) {
		printf("Invalid input(s). \n");
		return(-1);
	}

    get_BMIs(height, weight, &r_bmi, &r_std_weight);

    printf("Your MBI is %.1f.\n", r_bmi);

    if(r_bmi < 18.5 || r_bmi > 25.0) {
        printf("You need to diet.\n");
        double need = weight - r_std_weight;
        if(need > 0) {
            printf("You need to loss %.1f kg.\n", need);
        }
        else {
            printf("You need to gain %.1f kg.\n", -need);
        }
    }


}

void get_BMIs( int height, int weight, double *r_bmi, double *r_std_weight) {
    *r_std_weight = (double)(height * height * 22 / 10000);
    *r_bmi = (double)(weight / (height * height / 10000));
}