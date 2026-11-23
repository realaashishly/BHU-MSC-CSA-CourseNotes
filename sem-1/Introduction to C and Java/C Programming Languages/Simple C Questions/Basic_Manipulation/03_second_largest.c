#include <stdio.h>

int main(void){
   int arr[5] = {5, 7, 3, 8, 2};
   int size = sizeof(arr)/sizeof(arr[0]);

   int lar = arr[0], Slarg = arr[0];

   for(int i = 0; i < size; i++){
    if(arr[i] > lar){
        Slarg = lar;
        lar = arr[i];
    }
   }

   printf(" %d and %d\n", lar, Slarg);
    return 0;
}