#include <stdio.h>

int mat[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

void mupltiplyMat(){
    int row = 3, col = 3;
    int cnt = 0;

    int mulaMat[row][col];

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            mulaMat[i][j] = mat[i][j] * mat[j][i];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", mulaMat[i][j]);
        }

        printf("\n");
    }
}


int main(){
    int cnt = 1;

    // for(int i = 0 ;i < 3; i++ ){
    //     for(int j = 0; j < 3; j++){
    //         // mat[i][j] = cnt++;
    //         
    //     }
    // }

    mupltiplyMat();


    printf("\n");
    return 0;
}