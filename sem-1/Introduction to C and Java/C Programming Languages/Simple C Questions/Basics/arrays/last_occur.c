#include <stdio.h>

void getArrayFromUser(int arr[], int *size);

int main(void){
    int arr[100];
    int size;
    int pos = -1, key;

    getArrayFromUser(arr, &size);

    printf("Enter the element you want to find: ");
    scanf("%d", &key);

    for(int i = 0; i < size; i++){
        if(key == arr[i]) pos = i;
    }

     if(pos >= 0) printf("The elment is present at %d\n", pos+1); 
    else printf("element is not present\n");

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