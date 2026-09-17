#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int arr[100];
    int size;

    float avg = 0;

    getArrayFromUser(arr, &size);

    for(int i = 0; i < size; i++){
        avg += arr[i];
    }

     printf("Average of the array is: %.2f\n", avg/size);

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