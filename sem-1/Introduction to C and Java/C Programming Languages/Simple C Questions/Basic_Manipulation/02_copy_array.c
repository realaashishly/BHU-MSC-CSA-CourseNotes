#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int copy_arr[size];

    for(int i = 0; i < size; i++){
        copy_arr[i] = arr[i];
    }

    for(int i = 0; i < size; i++){
        printf(" %d ", copy_arr[i]);
    }

    printf("\n");
    return 0;
}