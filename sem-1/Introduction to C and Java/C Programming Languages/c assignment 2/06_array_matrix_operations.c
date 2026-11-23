#include <stdio.h>
int main() {
    int arr[5] = {12, 45, 2, 67, 23};
    int i, j, temp, largest, smallest;
    largest = smallest = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    // Bubble Sort
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{9,8,7},{6,5,4},{3,2,1}};
    int sum[3][3], mul[3][3], k;
    printf("\nMatrix Addition:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix Multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mul[i][j] = 0;
            for (k = 0; k < 3; k++)
                mul[i][j] += A[i][k] * B[k][j];
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
