#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int size;
    int arr[100];

    int key, pos = -1;

    getArrayFromUser(arr, &size);

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    for(int i = 0; i < size; i++){
        if(key == arr[i]){
            pos = i;
            break;
        }
    }

    if(pos < 0) printf("the element is not present\n");
    else printf("the element is present at position %d in an array\n", pos+1);

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