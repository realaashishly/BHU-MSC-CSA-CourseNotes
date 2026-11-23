#include <stdio.h>

// returning multiple values as an array
int *a(){

    int multipleValue[] = {1, 2, 3, 5, 6};
    return multipleValue;

}

int main()
{
    int *arr = a();
    printf("%d %d \n", arr[0], arr[3]);
    return 0;
}