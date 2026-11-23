#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 5, i, sum = 0;
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Memory allocated using malloc:\n");
    for (i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
        sum += ptr[i];
    }
    printf("Elements: 10 20 30 40 50\n");
    printf("Sum = %d, Average = %.2f\n", sum, sum / (float)n);
    int *cptr = (int *)calloc(n, sizeof(int));
    printf("\nMemory allocated using calloc (initial values):\n");
    for (i = 0; i < n; i++) printf("%d ", cptr[i]);
    printf("\n");
    ptr = (int *)realloc(ptr, 7 * sizeof(int));
    ptr[5] = 60; ptr[6] = 70;
    sum = 0;
    for (i = 0; i < 7; i++) sum += ptr[i];
    printf("\nAfter realloc to 7 elements:\n");
    printf("Elements: 10 20 30 40 50 60 70\n");
    printf("Sum = %d, Average = %.2f\n", sum, sum / 7.0);
    free(ptr);
    free(cptr);
    printf("Memory freed.\n");
    return 0;
}
