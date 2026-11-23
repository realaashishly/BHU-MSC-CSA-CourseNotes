#include <stdio.h>

int main(){

    int arr[8] = {1, 2, 4, 3, 2, 4, 1, 5};
    int size = 8;
    
    for(int i = 0; i < size; i++){
        int cnt = 0, alreadycnt = 0;

        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                alreadycnt = 1;
                break;
            }
        }

        if(alreadycnt) continue;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]) cnt++;
        }

        printf("%d found - %d times\n", arr[i], cnt);
    }
    return 0;
}