#include <stdio.h>

int main(void){
    int arr[5] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    bool isDsnd = true;

    for(int i = 0; i < size-1; i++){
        if(arr[i] < arr[i+1]){
            isDsnd = false;
            break;
        }
    }

    if(isDsnd) printf("Array is in descending order\n");
    else printf("Array is not in descending order\n");
    
    return 0;
}