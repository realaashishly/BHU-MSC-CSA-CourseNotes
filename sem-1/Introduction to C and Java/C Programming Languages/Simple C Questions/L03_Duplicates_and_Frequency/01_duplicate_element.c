#include <stdio.h>

int main(){

    int arr[8] = {10, 20, 10, 30, 20, 20, 40, 50};
    int size = 8;


    for(int i = 0; i < size; i++){
        int cnt = 1;
        int alreadyCnt = 0;

        for(int j = 0; j < i; j++){
            if (arr[i] == arr[j]){
                alreadyCnt = 1;
                break;
            }
        }

        if (alreadyCnt) continue;


        for(int j = i+1; j < size; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }

        if (cnt > 1) {
            printf("%d ", arr[i]);
        }

    }
        printf("\n");
    return 0;
}