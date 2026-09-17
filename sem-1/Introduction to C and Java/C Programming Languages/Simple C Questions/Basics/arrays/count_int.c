#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int arr[100];
    int size;

    int pos = 0, neg = 0, zero = 0;

    getArrayFromUser(arr, &size);

    for(int i = 0; i < size; i++){
        if(arr[i] > 0) pos++;
        else if(arr[i] < 0) neg++;
        else zero++; 
    }

    printf("the number of positive, negative and zero in the array is %d, %d and %d respectively\n", pos, neg, zero);

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