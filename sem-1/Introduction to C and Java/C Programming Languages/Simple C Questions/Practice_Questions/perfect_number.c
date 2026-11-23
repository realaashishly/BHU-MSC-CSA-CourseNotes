#include <stdio.h>

void PerfectNumber(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }

    if(sum == num){
        printf(" %d ", sum);
    }
}

void PrimeNumber(int num, int *cnt){
    int fact = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            fact += 1;
        }
    }

    if(fact == 2){
        printf(" %d ", num);
        (*cnt)++;
    }
}


int main(void){
    int size = 100;
    int cnt = 0;
    for(int i = 50; i < size; i++){
        PrimeNumber(i, &cnt);
    }

    printf("\n\n");
    printf("total: %d\n", cnt);

    return 0;
}