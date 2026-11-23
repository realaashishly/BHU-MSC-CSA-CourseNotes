#include <stdio.h>

void printArray(int arr[], int n){
    printf("\n\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void InsertElement(int arr[], int size, int key){
    int elem;
    printf("Enter the element you want to place in array\n");
    scanf("%d", &elem);


    for(int i = size - 1; i >= key; i--){
        arr[i] = arr[i - 1];
    }

    arr[key - 1] = elem;
}

void deleteElement(int arr[], int size, int key){
    for(int i = key - 1; i < size - 1; i++){
        arr[i] = arr[i+1];
    }
}

int main(void){
    int arr[5] = {3, 5, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;

    printf("\nEnter the position where you want to put\n");
    scanf("%d", &key);

    deleteElement(arr, size, key);

    printArray(arr, size);
    
    return 0;
}