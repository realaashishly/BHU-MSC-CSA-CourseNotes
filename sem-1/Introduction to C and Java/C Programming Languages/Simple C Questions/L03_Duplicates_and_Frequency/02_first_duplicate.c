#include <stdio.h>

int main(){

    int arr[4] = {1, 2, 4, 3};
    int size = 4;

    int cnt = 0;

    for(int i = 0; i < size - 1; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }

        if(cnt){
            printf(" first duplicate - %d\n", arr[i]);
            break;
        }
    }

    if(!cnt){
        printf("No duplicate element found\n");
    }

    return 0;
}