// 2. Demonstrate implicit conversion between different data types during arithmetic operations.
#include <stdio.h>

int main(void)
{
    int a = 10;
    float b = 2.5f;
    double c = 3.0;

    float result1 = a + b;       // int converted to float
    double result2 = a + c;      // int converted to double
    double result3 = b + c;      // float converted to double

    printf("int + float   = %.2f\n", result1);
    printf("int + double  = %.2f\n", result2);
    printf("float + double = %.2f\n", result3);

    return 0;
}
