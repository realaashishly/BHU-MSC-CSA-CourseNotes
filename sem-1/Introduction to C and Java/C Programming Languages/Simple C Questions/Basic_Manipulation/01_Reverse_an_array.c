#include <stdio.h>

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf(" %d ", arr[i]);
    }
    printf("\n\n");
}

void reverseArray(int arr[], int n){
    for(int i = n - 1; i >= 0 ; i--){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverseArrayInPlace(int arr[], int n){
    int temp, start = 0, end = n - 1;
    while(start <= end){
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp; 

    start++;
    end--;
   }
}

int main(void){

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    // printf("%d \n", size);


    printArray(arr, size);
    reverseArrayInPlace(arr, size);
    printArray(arr, size);

    return 0;
}