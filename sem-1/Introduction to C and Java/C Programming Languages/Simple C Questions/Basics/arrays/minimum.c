#include <stdio.h>

void getArrayFromUser(int arr[], int *size);
 

int main(void){
    int arr[100];
    int size;

    int cnt = 0;

    getArrayFromUser(arr, &size);

    int min = arr[0];

    while(cnt < size){
        if(min > arr[cnt]) min = arr[cnt];
        cnt++;
    }

     printf("Minimum number in the array is: %d\n", min);
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


