#include <stdio.h>

int main(void){
    int arr[5] = {1, 2, 9, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool isAsnd = true;

    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            isAsnd = false;
            break;
        }
    }

    if(isAsnd) printf("Array is in ascending order\n");
    else printf("Array is not in ascending order\n");
    
    return 0;
}