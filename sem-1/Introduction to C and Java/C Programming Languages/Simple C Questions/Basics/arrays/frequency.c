#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(){
    int arr[100];
    int size;

    int key;
    int cnt = 0;

    getArrayFromUser(arr, &size);

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    for(int i = 0; i < size; i++){
        if(key == arr[i]) cnt++;
    }

    printf("The Given Element is appear %d times in the array\n", cnt);

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