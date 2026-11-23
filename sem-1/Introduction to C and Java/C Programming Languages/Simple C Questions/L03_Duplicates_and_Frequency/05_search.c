#include <stdio.h>

int search(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(key == arr[i]){
            return i+1;
        }
    }

    return -1;
}

int main(void){

    int arr[10] = {1, 2, 4, 2, 1, 6, 0, 7, 6, 7};
    int size = 10;

    int key;

    printf("Enter element you want to find\n");
    scanf("%d", &key);

    int res = search(arr, size, key);

    if(res > 0) printf("Element found at position %d\n", res);
    else printf("Element not found\n");



    
    return 0;
}