#include <stdio.h>

int main(){
    int size = 9;
    int arr[9] = {1, 2, 4, 2, 1, 6, 7, 7, 6};
    
    for(int i = 0; i < size; i++){
        int cnt = 0;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]) cnt++;
        }

        if(cnt == 1) printf("First non-repeating element: %d\n", arr[i]);
    }
    return 0;
}