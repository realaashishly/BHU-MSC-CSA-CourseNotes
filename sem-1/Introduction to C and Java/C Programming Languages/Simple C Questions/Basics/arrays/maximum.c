#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int size;
    int arr[100];
    
    getArrayFromUser(arr, &size);
    
    int max = arr[0];
    
    for(int i = 0; i < size; i++){
        if(max < arr[i]) max = arr[i];
    }

    printf("Maximum number in the array is: %d\n", max);

}

void getArrayFromUser(int arr[], int *size){
    int cnt = 0;

    printf("Enter number of elements: ");
    scanf("%d", size);

    printf("Enter elements:\n");

    while(cnt < *size){
        scanf("%d", &arr[cnt]);
        cnt++;
    }
}