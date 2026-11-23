#include <stdio.h>

void most_frequently(int arr[], int size){
    int mostFrequent, maxFrequency = 0;

     for(int i = 0; i < size; i++){
        int cnt = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }

        if(cnt > maxFrequency){
            mostFrequent = arr[i];
            maxFrequency = cnt;
        }
    }

    printf("most - %d \n", mostFrequent);

}

void least_frequently(int arr[], int size){
    int leastFrequent, leastFrequency = size + 1;

    for(int i = 0; i < size; i++){
        int cnt = 0;
        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }

        if(cnt < leastFrequency){
            leastFrequency = cnt;
            leastFrequent = arr[i];
        }
    }

    printf("least - %d \n", leastFrequent);
}

int main(void){

    int size = 10;
    int arr[10] = {1, 2, 4, 2, 1, 6, 0, 7, 6, 7};

    most_frequently(arr, size);
    least_frequently(arr, size);


    return 0;
}