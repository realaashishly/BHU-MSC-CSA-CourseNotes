#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue: a = %d b = %d\n", a, b);
}
void swapByRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 10, y = 20;
    printf("Before Swap: x = %d y = %d\n", x, y);
    swapByValue(x, y);
    printf("After Call by Value: x = %d y = %d\n", x, y);
    swapByRef(&x, &y);
    printf("After Call by Reference: x = %d y = %d\n", x, y);
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr, i;
    printf("Array using Pointer Arithmetic:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", *(p + i));
    printf("\n");
    return 0;
}
