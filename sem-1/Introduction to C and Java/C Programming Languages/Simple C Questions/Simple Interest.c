#include <stdio.h>

int main(void){
    float principle, rate, year;

    printf("enter principle, rate and year: ");
    scanf("%f %f %f",&principle, &rate, &year);

    printf("SI is %.2f ", (principle*rate*year)/100);
    return 0;
}