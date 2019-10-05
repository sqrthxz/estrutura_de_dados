#include <stdio.h>

int main(){
    int matriz[100][100], *pont, *pont2, i, j = 1;
    pont = matriz[0];

    for (i = 0; i < 10000; i++){
        *pont = 0;
        pont++;
    }

    pont2 = matriz[0];

    for(i = 0; i < 10000; i++){
        *pont2 = j;
        printf("%d ", *pont2);
        pont2 ++;
        j++;
    }

    return(0);
}
