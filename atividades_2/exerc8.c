#include <stdio.h>
#include <stdlib.h>


int maior(int N, int A[][N]){
    int k = -1, lin, col, i, j, m;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(A[i][j] >= k){
                k = A[i][j];
            }
        }
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            if(A[i][j] >= k){
                m = A[i][j];
                lin = i;
                col = j;
                printf("%d     %d     %d\n", m, lin, col);
                A[i][j] = 0;
            }
        }
    }

}

int main(){
    int m[3][3] = {3,7,1,1,9,8,5,3,4};
    printf("El   Lin   Col\n");
    for(int i = 0; i < 7; i++){
        maior(3, m);
    }
}
