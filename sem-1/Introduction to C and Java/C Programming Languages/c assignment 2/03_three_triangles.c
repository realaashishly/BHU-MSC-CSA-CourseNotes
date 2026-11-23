#include <stdio.h>
int main() {
    int n = 5, i, j, space;
    printf("Left Triangle:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\nRight Triangle:\n");
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    printf("\nDownward Triangle:\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
