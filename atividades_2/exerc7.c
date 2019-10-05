#include <stdio.h>

int maior(int N, int A[][N]){
    int k = -999999, lin, col, i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(A[i][j] > k){
                k = A[i][j];
                lin = i;
                col = j;
            }
        }
    }
    printf("k = %d Lin = %d Col = %d\n", k, lin, col);
}
int main(){
    int mat[3][3] = {3, 7, 1,
                     1, 2, 8,
                     5, 3, 4};
    maior(3, mat);
}
