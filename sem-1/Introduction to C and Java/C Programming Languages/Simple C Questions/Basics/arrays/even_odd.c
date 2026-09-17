#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int arr[100];
    int size;

    int even = 0, odd = 0, cnt = 0;

    getArrayFromUser(arr, &size);

    while(cnt < size){
        if(arr[cnt]%2 == 0) even += 1;
        else odd += 1;
        cnt++;
    }

    printf("total even elements is %d and total odd elements is %d\n", even, odd);
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