#include <stdio.h>
#define PI 3.14

 int main(void){

    double rad;
    printf("Enter the radius of circle: ");
    scanf("%lf", &rad);

    double area = PI * rad * rad;
    double circumference = 2 * PI * rad;

    printf("The Area and Circumference of circle is %lf and %lf\n", area, circumference);

    return 0;
 }