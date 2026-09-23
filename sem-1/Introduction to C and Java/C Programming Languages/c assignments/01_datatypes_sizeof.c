// 1. Use char, int, float, double, and long variables and display their values and sizes using sizeof()
#include <stdio.h>

int main(void){
     char c = 'A';
    int i = 100;
    float f = 12.5f;
    double d = 123.456;
    long l = 100000L;

    printf("char   : value = %c, size = %zu byte(s)\n", c, sizeof(c));
    printf("int    : value = %d, size = %zu byte(s)\n", i, sizeof(i));
    printf("float  : value = %.2f, size = %zu byte(s)\n", f, sizeof(f));
    printf("double : value = %.3f, size = %zu byte(s)\n", d, sizeof(d));
    printf("long   : value = %ld, size = %zu byte(s)\n", l, sizeof(l));

    return 0;
}