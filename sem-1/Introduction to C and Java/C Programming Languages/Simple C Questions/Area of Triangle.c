#include <stdio.h>
#define HALF 1.0/2.0

int main(void){
    float base, height;

    printf("Enter the Base of Triangle : ");
    scanf("%f", &base);
     
    printf("Enter the Height of Triangle : ");
    scanf("%f", &height);

    float area = HALF * base * height;
    printf("Area of triangle is %f", area);

    return 0;
}