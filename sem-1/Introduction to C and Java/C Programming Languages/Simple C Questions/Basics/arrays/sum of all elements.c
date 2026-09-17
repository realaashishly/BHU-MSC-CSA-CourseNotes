#include <stdio.h>

int sumOfArray(int arr[], int n);


int main(void){
    int n;
    int arr[100];
    int sum = 0;

    int temp = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    while(temp < n){
        scanf("%d", &arr[temp]);
        temp++;
    }

    sum = sumOfArray(arr, n);
    printf("Sum = %d\n", sum);
}

int sumOfArray(int arr[], int size){
    int cnt = 0;
    int temp = 0;

    while(cnt < size){
        temp += arr[cnt];
        cnt++;
    }    

    return temp;
}