#include <stdio.h>
int main() {
    int n = 13, count = 0, temp = n;
    int a = 10, b = 20;
    // Even / Odd using &
    if (n & 1)
        printf("%d is Odd.\n", n);
    else
        printf("%d is Even.\n", n);
    // Count set bits
    while (temp != 0) {
        count += temp & 1;
        temp = temp >> 1;
    }
    printf("Number of set bits in %d = %d\n", n, count);
    // Swap using XOR
    printf("\nBefore Swap: a = %d b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After Swap: a = %d b = %d\n", a, b);
    return 0;
}
