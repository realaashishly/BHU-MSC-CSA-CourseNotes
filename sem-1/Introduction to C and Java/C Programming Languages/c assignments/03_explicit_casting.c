// 3. Perform explicit type casting and show how it affects the result of an expression.

#include <stdio.h>

int main(void)
{
    int a = 5, b = 2;

    int integer_result = a / b;
    float cast_result = (float)a / b;

    printf("Without casting : %d / %d = %d\n", a, b, integer_result);
    printf("With casting    : (float)%d / %d = %.2f\n",
           a, b, cast_result);

    return 0;
}