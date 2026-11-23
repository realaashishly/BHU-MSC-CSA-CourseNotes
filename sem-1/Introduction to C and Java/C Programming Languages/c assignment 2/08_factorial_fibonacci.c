#include <stdio.h>
int factRec(int n) {
    if (n <= 1) return 1;
    return n * factRec(n - 1);
}
int factIter(int n) {
    int f = 1, i;
    for (i = 1; i <= n; i++) f *= i;
    return f;
}
int fibRec(int n) {
    if (n <= 1) return n;
    return fibRec(n - 1) + fibRec(n - 2);
}
int main() {
    int n = 5, i;
    printf("Factorial using Recursion: %d\n", factRec(n));
    printf("Factorial using Iteration: %d\n", factIter(n));
    printf("Fibonacci using Recursion: ");
    for (i = 0; i < n; i++) printf("%d ", fibRec(i));
    printf("\n");
    printf("Fibonacci using Iteration: ");
    int a = 0, b = 1, c;
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
