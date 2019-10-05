#include<stdio.h>

int main(){
    float *matrx;
    matrx = malloc(sizeof(float)*(50*50));
    int i, j;

    for(i =0; i < 50; i++){
        for(j = 0; j < 50; j++){
            matrx[j+(50*i)] = 0.0;
            printf("|%.1f| ",matrx[j+(50*i)]);
        }
        printf("\n");
    }
}
