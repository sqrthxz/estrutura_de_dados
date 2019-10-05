#include <stdio.h>

void strpy(char *destino, char *origem){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        i++;
    }
}

int main(){
    char tes[] = "teste";
    int tam = sizeof(tes)/sizeof(tes[0]);
    char te[tam];
    strpy(&te[0], &tes[0]);
    printf("destino = %s | origem = %s", te, tes);
}
