#include <stdio.h>
#include <stdlib.h>

int st(int v[]){
    int i, j, aux;

    for (i = 0; i < 5-1; i++){
        for (j = 0; j < 5-i-1; j++){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){
    int vet[5] = {5,4,3,2,1};
    st(vet);

    for(int i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }
    return 0;
}
